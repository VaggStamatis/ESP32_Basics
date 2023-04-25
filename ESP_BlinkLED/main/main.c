#include <stdio.h>
#include "esp_log.h"
#include "freertos/FreeRTOS.h"
#include "freertos/task.h"
#include "driver/gpio.h"

#define PIN 2

/*
    start by defining a pin number of the pin we are about to use and connect our led
    use the library driver/gpio.h to get access to the pins of the ESP32

    set_direction function to tell the board what we will use the pin as (i/o)
    set_level to output the signal 0 or 1 to the Pin of choice

    See the ESP_BlinkLED_Wiring.png image for the wiring of the board led and the resistor
*/

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
