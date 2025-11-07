#pragma once

#include "freertos/FreeRTOS.h"
#include "freertos/task.h"

class Main final {
    public:
        esp_err_t setup(void);
        void loop(void);
};