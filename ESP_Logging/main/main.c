#include <stdio.h>
#include "esp_log.h"  //used for ESP's logging capabilities

void app_main(void)
{
    printf("Hello From The ESP32\n");

    //this sets the log level to only INFO and above 
    esp_log_level_set("LOG", ESP_LOG_INFO);

    //outputs an Error. Takes 2 parameters. A tag and an output String
    ESP_LOGE("LOG", "This is an ERROR"); 

    //outputs a Warning. Takes 2 parameters. A tag and an output String
    ESP_LOGW("LOG", "This is a Warning");

    //outputs an information Message. Takes 2 parameters. A tag and an output String
    ESP_LOGI("LOG", "This is an Informational Message");

    //outputs a Debugg Statement. Takes 2 parameters. A tag and an output String
    ESP_LOGD("LOG", "This is a Debugg statement");

    //outputs a Verbose. Takes 2 parameters. A tag and an output String
    ESP_LOGV("LOG", "This is a Verbose");

    //this sets the log level to all aka Verbose and above 
    esp_log_level_set("TAG_2", ESP_LOG_VERBOSE);

    int number = 0;
    //outputs an Error. Takes 2 parameters. A tag and an output String
    ESP_LOGE("TAG_2", "This is an ERROR %d" , number++); 

    //outputs a Warning. Takes 2 parameters. A tag and an output String
    ESP_LOGW("TAG_2", "This is a Warning %d" , number++);

    //outputs an information Message. Takes 2 parameters. A tag and an output String
    ESP_LOGI("TAG_2", "This is an Informational Message %d" , number++);

    //outputs a Debugg Statement. Takes 2 parameters. A tag and an output String
    ESP_LOGD("TAG_2", "This is a Debugg statement %d" , number++);

    //outputs a Verbose. Takes 2 parameters. A tag and an output String
    ESP_LOGV("TAG_2", "This is a Verbose %d" , number++);


/* 
    In order to logg every log (Error,Warning,Info,Debug,Verbose)
    we must run in the terminal while on the folder of the project 
    ..$ idf.py menuconfig
    there we navigate to Component Configure -> Log Output -> Set the default log to Verbose and save the config
    now when we run the project we can see every message logging
*/
}
