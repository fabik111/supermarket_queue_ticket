#include <ArduinoIoTCloud.h>
#include <utility/time/TimeService.h>
#include <Arduino_ConnectionHandler.h>


const char THING_ID[] = "*********";

const char SSID[]     = SECRET_SSID;    // Network SSID (name)
const char PASS[]     = SECRET_PASS;    // Network password (use for WPA, or use as key for WEP)

void onClientCapacityChange();
void onStayTimeChange();

int clientCapacity;
int stayTime;
extern TimeService time_service;

void initProperties(){

  ArduinoCloud.setThingId(THING_ID);
  ArduinoCloud.addProperty(clientCapacity, READWRITE, ON_CHANGE, onClientCapacityChange);
  ArduinoCloud.addProperty(stayTime, READWRITE, ON_CHANGE, onStayTimeChange);

}

WiFiConnectionHandler ArduinoIoTPreferredConnection(SSID, PASS);
