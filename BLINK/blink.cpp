#include "driver/gpio.h"
#include "freertos/FreeRTOS.h"
#include "freertos/task.h"

#define LED_PIN GPIO_NUM_8  // onboard blue LED

extern "C" void app_main(void)
{
    gpio_reset_pin(LED_PIN);
    gpio_set_direction(LED_PIN, GPIO_MODE_OUTPUT);

    while (true)
    {
        //LED ON
        gpio_set_level(LED_PIN, 0); 
        vTaskDelay(pdMS_TO_TICKS(500)); //0.5s

        //LED OFF
        gpio_set_level(LED_PIN, 1);
        vTaskDelay(pdMS_TO_TICKS(500)); //0.5s
    }
}
