#include <stdio.h>
#include "freertos/FreeRTOS.h"
#include "freertos/task.h"
#include "esp_log.h"

static const char *TAG = "FLIPPER_BLACK";

void app_main(void)
{
    ESP_LOGI(TAG, "====================================");
    ESP_LOGI(TAG, "   Flipper Black Firmware Started   ");
    ESP_LOGI(TAG, "====================================");

    ESP_LOGI(TAG, "Hardware: ESP32-S3 + CC1101 + SX1262 + PN532");
    ESP_LOGI(TAG, "Status: Minimal Framework Loaded");

    while (1) {
        ESP_LOGI(TAG, "Flipper Black is alive...");
        vTaskDelay(pdMS_TO_TICKS(5000));
    }
}