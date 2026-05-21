#include <WiFi.h>
void setup(){
    initSerial();
    wifiInit();
}
void loop(){
    wifiTask();
}