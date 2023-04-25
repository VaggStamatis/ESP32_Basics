#include <stdio.h>
#include "esp_log.h"
#include "freertos/FreeRTOS.h"
#include "freertos/task.h"

#define TAG "DELAY"

void app_main(void)
{
    int i = 0;
    while(1){
        /*  using the vTaskDelay function for delay
            v stands for Void becuase it doesn't return anything 
            the integer number that the function takes as an argument
            is not seconds but ticks meaning the cpu frequency ! 

            To make this number equal to MS we divide it with portTICK_PERIOD_MS
        */ 
        vTaskDelay(1000 / portTICK_PERIOD_MS);
        ESP_LOGI(TAG , "in loop %d" , i++);
    }
}
