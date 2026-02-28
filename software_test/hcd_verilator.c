#include "tusb_option.h"
#include "host/hcd.h"

// External AHB access functions from your test_top.cpp
extern void usbhw_reg_write(uint32_t addr, uint32_t data);
extern uint32_t usbhw_reg_read(uint32_t addr);

bool hcd_init(uint8_t rhport) {
    // Port 0x0 is USB_CTRL based on your Linux driver reference
    // This turns on the PHY and enables SOF
    usbhw_reg_write(0x0, 0x1E1); 
    return true;
}

void hcd_int_enable(uint8_t rhport) {
    // Enable "Done" and "Error" interrupts in USB_IRQ_MASK (0x10)
    usbhw_reg_write(0x10, 0x06); 
}


// Correct Register Offsets
#define REG_USB_XFER_DATA  0x14
#define REG_USB_XFER_TOKEN 0x18
#define REG_USB_WR_DATA    0x20

// Token Bitfields
#define TOKEN_START          (1u << 31)
#define TOKEN_IN             (1u << 30)
#define TOKEN_ACK_EXPECT     (1u << 29)
#define TOKEN_PID_DATAX      (1u << 28)
#define TOKEN_PID_SHIFT      16
#define TOKEN_DEV_ADDR_SHIFT 9
#define TOKEN_EP_ADDR_SHIFT  5

// Valid PIDs for this IP
#define USB_PID_OUT    0xE1
#define USB_PID_IN     0x69
#define USB_PID_SETUP  0x2D

bool hcd_edpt_xfer(uint8_t rhport, uint8_t dev_addr, uint8_t ep_addr, uint8_t const* buffer, uint16_t buflen) {
    uint8_t ep_num = ep_addr & 0x0f;
    uint8_t direction = (ep_addr & 0x80) ? TUSB_DIR_IN : TUSB_DIR_OUT;
    
    // 1. Determine the Token PID
    // Note: You'll need to know if this is a SETUP packet (usually ep0 and special flag)
    uint8_t pid = (direction == TUSB_DIR_IN) ? USB_PID_IN : USB_PID_OUT;

    // 2. Load the Tx FIFO for OUT transfers
    if (direction == TUSB_DIR_OUT) {
        for (uint16_t i = 0; i < buflen; i++) {
            usbhw_reg_write(REG_USB_WR_DATA, buffer[i]);
        }
    }

    // 3. Set payload length
    usbhw_reg_write(REG_USB_XFER_DATA, buflen);

    // 4. Construct Token
    uint32_t token = TOKEN_START | TOKEN_ACK_EXPECT;
    token |= (uint32_t)pid << TOKEN_PID_SHIFT;
    token |= (uint32_t)dev_addr << TOKEN_DEV_ADDR_SHIFT;
    token |= (uint32_t)ep_num << TOKEN_EP_ADDR_SHIFT;
    
    if (direction == TUSB_DIR_IN) token |= TOKEN_IN;

    // 5. Handle Data Toggle
    // Get toggle from TinyUSB's internal state for this endpoint
    if (tu_edpt_dir(ep_addr) == TUSB_DIR_IN) {
        // You may need a shim to access the internal toggle or track it manually
        // if (toggle) token |= TOKEN_PID_DATAX; 
    }

    usbhw_reg_write(REG_USB_XFER_TOKEN, token);
    return true;
}