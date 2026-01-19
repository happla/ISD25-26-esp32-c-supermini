#include "driver/gpio.h"
#include "freertos/FreeRTOS.h"
#include "freertos/task.h"
#include "esp_log.h"

#define LED_BUILTIN GPIO_NUM_8  // onboard blue LED
static const char* TAG = "BLINK";

extern "C" void app_main(void)
{
    gpio_reset_pin(LED_BUILTIN);
    gpio_set_direction(LED_BUILTIN, GPIO_MODE_OUTPUT);

    ESP_LOGI(TAG, "Starting blink...");

    while (true)
    {
        gpio_set_level(LED_BUILTIN, 0);  // LED ON (active-low)
        ESP_LOGI(TAG, "LED ON");
        vTaskDelay(pdMS_TO_TICKS(1000));

        gpio_set_level(LED_BUILTIN, 1);  // LED OFF
        ESP_LOGI(TAG, "LED OFF");
        vTaskDelay(pdMS_TO_TICKS(1000));
    }
}
