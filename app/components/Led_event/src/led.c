#include <stdio.h>
#include "esp_log.h"
#include "sdkconfig.h"

void led_event(void)
{
  ESP_LOGI("led","led is on");
  ESP_LOGI("led","led is off");
}