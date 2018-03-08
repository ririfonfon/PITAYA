#include <WiFi.h>
#include <WiFiUdp.h>

WiFiUDP WUdp;

//Wifi settings
//const char* ssid = "stratum";
const char* password = "9000leds";

const char* ssid = "mgr4g";

//
// NETWORK
//
IPAddress server(192, 168, 43, 255);
unsigned int udpPort_node = 3737;  // Node port to listen on
unsigned int udpPort_server = 3738;  // Server port to speak to

bool wifi_available = false;

void wifi_init() {

  IPAddress ip(192, 168, 43, eeprom_getID() + 100);               // Static IP
  IPAddress gateway(192, 168, 43, 1);
  IPAddress subnet(255, 255, 255, 0);

  // Enable wifi
  WiFi.disconnect(true);
  WiFi.mode(WIFI_STA);
  WiFi.config(ip, gateway, subnet);

  // Connect wifi
  WiFi.onEvent(wifi_event);
  WiFi.begin(ssid, password);

}

void wifi_send(uint8_t* message, int sizeM) {
  if (!wifi_available) return;
  WUdp.beginPacket(server, udpPort_server);
  WUdp.write(message, sizeM);
  WUdp.endPacket();
}


bool wifi_read(unsigned char* incomingPacket) {
  int packetSize = WUdp.parsePacket();
  if (packetSize)
  {
    #if defined(DEBUG_MSG)
        Serial.printf("Received %d bytes from %s\n", packetSize, WUdp.remoteIP().toString().c_str());
    #endif

    // receive incoming UDP packets
    int len = WUdp.read(incomingPacket, MTUu);

    #if defined(DEBUG_MSG)
        Serial.println("Packet stored\n");
        for (int k = 0; k < len; k++) Serial.printf("%i ", incomingPacket[k]);
        Serial.println();
        //Serial.printf("PACKET: %s*\n", incomingPacket);
    #endif

    return true;
  }
  return false;
}

void wifi_event(WiFiEvent_t event) {
  static byte retry = 0;

  if (event == SYSTEM_EVENT_STA_DISCONNECTED) {
    wifi_available = false;
    retry += 1;

    #ifdef DEBUG
        Serial.print("WiFi lost connection... ");
        Serial.print(" reconnecting ");
        Serial.print(retry);
        //Serial.print("/");
        //Serial.print(maxRetry);
        Serial.println();
    #endif

    WiFi.reconnect();
  }
  else if (event == SYSTEM_EVENT_STA_GOT_IP) {
    retry = 0;
    if (wifi_available) return;
    wifi_available = true;
    
    #ifdef DEBUG
        Serial.print("WiFi connected, IP: ");
        Serial.println(WiFi.localIP());
    #endif

    // UDP Receiver
    WUdp.begin(udpPort_node);
  
    #if defined(DEBUG)
      Serial.printf("Now listening on UDP port %d\n", udpPort_node);
    #endif
  }
}

bool wifi_ok() {
  return wifi_available;
}

