#include "main.h"
#include "esp_log.h"

#define LOG_TAG "MAIN"

static Main app;

extern "C" void app_main() {
    ESP_ERROR_CHECK(app.setup());

    while (true){
        app.loop();
    }

    while (true){
        ESP_LOGI(LOG_TAG, "hallo bro");
        vTaskDelay(100);
    }
}

esp_err_t Main::setup(){
    esp_err_t status{ESP_OK};
    ESP_LOGI(LOG_TAG, "Assalamu'alaikum esp32");
    return status;
}

void Main::loop() {
    ESP_LOGI(LOG_TAG, "Loopyou");
    vTaskDelay(1000);
}
