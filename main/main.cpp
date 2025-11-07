#include <cstdio>
#include <string>
#include "esp_log.h"

static const char* TAG = "APP";

extern "C" void app_main() { // app_main harus C linkage
  std::string who = "ESP32-S3 + C++";
  ESP_LOGI(TAG, "Hello from %s", who.c_str());
}