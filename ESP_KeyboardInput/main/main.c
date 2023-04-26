#include <stdio.h>
#include <string.h>
#include "esp_log.h"
#include "freertos/FreeRTOS.h"
#include "freertos/task.h"

/*  Using the getchar() function we get a user input from the keyboard
    we store the input into a string and then we output the typed characters 
    as a string. It is nesseccary to include the string.h library. 
*/

void app_main(void)
{
    char c = 0;
    char str[100];
    memset(str,0,sizeof(str));

    while(c != '\n')
    {
        c = getchar();
        if (c != 0xff)
        {
            str[strlen(str)] = c;
            printf("%c" , c);
        }
        vTaskDelay(100 / portTICK_PERIOD_MS);
    }
    printf("you typed : %s\n" , str);
}
