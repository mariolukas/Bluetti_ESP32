#ifndef CONFIG_H
#define CONFIG_H
#include "Arduino.h"

#define DEBUG                 1
//#define RESET_WIFI_SETTINGS   1

#define EEPROM_SALT 13374

#define DEVICE_NAME "BLUETTI-MQTT"

#define BLUETOOTH_QUERY_MESSAGE_DELAY 5000

#define RELAISMODE 1
#define RELAIS_PIN 22
#define RELAIS_LOW LOW
#define RELAIS_HIGH HIGH

#define MAX_DISCONNECTED_TIME_UNTIL_REBOOT 5 //device will reboot when wlan/BT/MQTT is not connected within x Minutes
#define DEVICE_STATE_UPDATE  5

#define MSG_VIEWER_ENTRY_COUNT 20 //number of lines for web message viewer, i (AB) tried 30 but things got worse
#define MSG_VIEWER_REFRESH_CYCLE 5 //refresh time for website data in seconds

#ifndef BLUETTI_TYPE
  #define BLUETTI_TYPE BLUETTI_AC200M
#endif


#endif
