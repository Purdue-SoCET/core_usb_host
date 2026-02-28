#ifndef _TUSB_CONFIG_H_
#define _TUSB_CONFIG_H_

#ifdef __cplusplus
 extern "C" {
#endif

// --- System Configuration ---
// Define your custom MCU port (TinyUSB often uses OPT_MCU_NONE or a custom define for new ports)
#define CFG_TUSB_MCU               OPT_MCU_NONE 
#define CFG_TUSB_OS                OPT_OS_NONE  // Bare metal (no RTOS)
#define CFG_TUSB_DEBUG             2            // 2 = Print errors and warnings (helpful for sim)

// --- Host Configuration ---
#define CFG_TUH_ENABLED            1            // Enable Host Stack
#define CFG_TUH_MAX_SPEED          OPT_MODE_FULL_SPEED

// Size of enumeration buffer
#define CFG_TUH_ENUMERATION_BUFSIZE 256

// --- Class Driver Configuration (Set to 1 if you want to test them) ---
#define CFG_TUH_HUB                0
#define CFG_TUH_HID                0
#define CFG_TUH_MSC                0
#define CFG_TUH_CDC                0

#ifdef __cplusplus
 }
#endif

#endif /* _TUSB_CONFIG_H_ */