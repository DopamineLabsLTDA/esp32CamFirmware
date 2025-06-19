#include "WiFiHandle.hpp"

void staticIPHandle(const char* ssid, const char* password)
{
    IPAddress local_IP(REXBACK_IP);
    IPAddress gateway(REXBACK_GATE);
    IPAddress subnet(REXBACK_MASK);

    // WiFi connection
    WiFi.begin(ssid, password);
    WiFi.config(local_IP, gateway, subnet);

}