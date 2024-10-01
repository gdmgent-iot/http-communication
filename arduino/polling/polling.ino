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
char serverAddres[] = "172.20.10.5";
int port = 3001;

// wifi settings
int status = WL_IDLE_STATUS;
WiFiClient wifi;
HttpClient client = HttpClient(wifi, serverAddress, port);


void setup() {
  Serial.begin(9600);

  // do nothing, if no serial connection
  while(!Serial) { 
    ;
  }

  if(WiFi.status() == WL_NO_MODULE) {
    Serial.println("Aj.... Geen wifi module");
    while(true);
  }

  // try to make connection
  Serial.print("Verbinden met netwerk");
  Serial.println(ssid);

  // Herhaal totdat de verbinding is gemaakt
  while (status != WL_CONNECTED) {
    // Probeer verbinding te maken met WiFi netwerk
    status = WiFi.begin(ssid, pass);

    // Wacht 10 seconden voordat je opnieuw probeert
    delay(1000);
  }

  // Als verbinding is gelukt
  Serial.println("Succesvol verbonden met het WiFi netwerk!");
  Serial.print("IP-adres: ");
  Serial.println(WiFi.localIP());  // Print het IP-adres dat het board heeft gekregen

}

void loop() {
  // put your main code here, to run repeatedly:
  
}
