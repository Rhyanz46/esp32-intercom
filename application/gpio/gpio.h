#pragma once

// #include "freertos/FreeRTOS.h"
// #include "freertos/task.h"

// #include "driver/gpio.h"

namespace Gpio {
    class GpioBase {
         public: 
    };
    class GpioOutput {
        bool _state = false;
        public: 
            esp_err_t set(const bool state);
            esp_err_t toggle(void);
            bool state(void) { return _state; };
    };
}