// import external libraries
#include <WiFiNINA.h>
#include <ArduinoHttpClient.h>
#include <ArduinoJson.h>

// include local credentials (added in gitignore, thus not in repo)
#include "secrets.h"

// local wifi credentials
char ssid[] = SECRET_SSID;
char pass[] = SECRET_PASS;

// server settings
char serverAddres[] = "";
int port = 3001;

// wifi settings
int status = WL_IDLE_STATUS;
WiFiClient wifi;
// HttpClient client = HttpClient(wifi, serverAddress, port);


void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:

}
