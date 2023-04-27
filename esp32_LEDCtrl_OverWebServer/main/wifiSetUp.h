#ifndef WIFISETUP
#define WIFISETUP

#include <string.h>
#include "freertos/FreeRTOS.h"
#include "freertos/task.h"
#include "freertos/event_groups.h"
#include "esp_system.h"
#include "esp_event.h"
#include "nvs_flash.h"
#include "esp_log.h"
#include "esp_wifi.h"

#include "lwip/err.h"
#include "lwip/sys.h"

void wifi_initialize_sta(void);
static void event_handler(void* arg, esp_event_base_t event_base,
                                int32_t event_id, void* event_data);


#endif