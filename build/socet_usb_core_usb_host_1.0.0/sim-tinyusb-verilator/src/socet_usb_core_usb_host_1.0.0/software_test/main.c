#include <stdio.h>
#include "tusb.h"
#include "usb_pal.h"

// In main.c
int app_main(void) {
    tuh_init(BOARD_TUH_RHPORT);
    // For simulation, you might only want to run a few loops 
    // or use a mechanism to check for success.
    for(int i = 0; i < 1000; i++) {
        tuh_task();
    }
    return 0;
}

// Callback: Triggered when TinyUSB successfully identifies a device
void tuh_mount_cb(uint8_t dev_addr) {
    printf("Device successfully mounted at address %d\n", dev_addr);
}