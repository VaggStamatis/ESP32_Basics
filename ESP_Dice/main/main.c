#include <stdio.h>
#include "esp_log.h"
#include "freertos/FreeRTOS.h"
#include "freertos/task.h"
#include "esp_random.h"
#include "math.h"

/*  idf version 4 uses esp_system.h to include the random function
    but idf version 5 uses the esp_random.h to include the random function 
*/

#define TAG "DICE"

int dice_roll()
{
    int random = esp_random();
    int positive_Number = abs(random);
    int dice_Number = (positive_Number % 6) + 1;
    return dice_Number;
}

void app_main(void)
{
    while(1)
    {
        vTaskDelay(1000 / portTICK_PERIOD_MS);
        ESP_LOGI(TAG , "random number: %d" , dice_roll());
    }    
}