#include <stdio.h>
#include "esp_log.h"
#include "freertos/FreeRTOS.h"
#include "freertos/task.h"
#include "driver/gpio.h"

#define PIN 2

void app_main(void)
{
    gpio_set_direction(PIN , GPIO_MODE_OUTPUT);
    uint32_t is_ON = 0;
    while (true)
    {
        is_ON = !is_ON;
        gpio_set_level(PIN, is_ON);
        vTaskDelay(1000 / portTICK_PERIOD_MS);
    }
    
}
