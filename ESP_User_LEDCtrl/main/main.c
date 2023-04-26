#include <stdio.h>
#include <string.h>
#include "esp_log.h"
#include "freertos/FreeRTOS.h"
#include "freertos/task.h"
#include "driver/gpio.h"

#define TAG "LEDCtrl"
#define PIN 2 

/*  
    Uses the 2 previous projects ESP_KeyboardInput and ESP_BlinkLED
    takes a user input ON or OFF to either activate or diactivate the LED 
*/

void led_control(char str[100]){
    int compare_ON = strcmp(str , "ON\n");
    int compare_OFF = strcmp(str , "OFF\n");
    if(compare_ON == 0){
        gpio_set_level(PIN, 1);
        vTaskDelay(1000 / portTICK_PERIOD_MS);
        ESP_LOGI(TAG, "The Led is ON");
    }else if(compare_OFF == 0){
        gpio_set_level(PIN, 0);
        vTaskDelay(1000 / portTICK_PERIOD_MS);
        ESP_LOGI(TAG, "The Led is OFF");
    }
    return;
}

void app_main(void)
{
    char c =0;
    char str[100];
    memset(str, 0, sizeof(str));
    gpio_set_direction(PIN , GPIO_MODE_OUTPUT);
    printf("Type <ON> to switch the LED on \n Type <OFF> to keep the LED switched off !\n");


    while(c != '\n'){
        c = getchar();
        if (c != 0xff){
            str[strlen(str)] = c;
            printf("%c" , c);
        }
        vTaskDelay(100 / portTICK_PERIOD_MS);
        led_control(str);
    }    
}
