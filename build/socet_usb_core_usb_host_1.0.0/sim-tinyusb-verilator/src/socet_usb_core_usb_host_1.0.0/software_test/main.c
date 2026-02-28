#include "tusb.h"

// Define the root hub port to 0 for our simulation
#ifndef BOARD_TUH_RHPORT
#define BOARD_TUH_RHPORT 0
#endif

// We can expose the C++ tick function so our C loop can advance simulation time
#ifdef USB_TESTBENCH
#ifdef __cplusplus
extern "C" {
#endif
    extern void tick();
#ifdef __cplusplus
}
#endif
#endif

int app_main(void) {
    // 1. Initialize the TinyUSB host stack
    tuh_init(BOARD_TUH_RHPORT);

    // 2. Run the TinyUSB task loop
    // For simulation, we'll run it a set number of times instead of infinitely
    for (int i = 0; i < 5000; i++) {
        tuh_task(); 
        
        // Advance the hardware clock so the simulated USB IP can process data
        #ifdef USB_TESTBENCH
        tick(); 
        #endif
    }

    return 0;
}