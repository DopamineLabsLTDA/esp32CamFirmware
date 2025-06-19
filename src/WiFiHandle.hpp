#ifndef WIFIHANDLE_HPP
#define WIFIHANDLE_HPP

#include "IPAddress.h"
#include "WiFi.h"

#ifndef REXBACK_IP
#define REXBACK_IP 192, 168, 0, 50
#endif

#ifndef REXBACK_GATE
#define REXBACK_GATE 192,168,0,1
#endif

#ifndef REXBACK_MASK
#define REXBACK_MASK 255,255,255,0
#endif

void staticIPHandle(const char* ssid, const char* password);

#endif