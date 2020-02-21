#include <SPI.h>
#include <mcp_can.h>

const int SPI_CS_PIN = 9;
const int ledHIGH    = 1;
const int ledLOW     = 0;

MCP_CAN CAN(SPI_CS_PIN);

void setup() {
  // Initialize everything we need

      Serial.begin(115200);
      Serial.println("Initializing");

      while (CAN_OK != CAN.begin(CAN_100KBPS))
      {
        Serial.println("CAN BUS Shield init fail");
        Serial.println("Init CAN BUS Shield again");
        delay(100);
      }
      
    Serial.println("CAN BUS Shield init ok!");
}

unsigned char ignition_on[5] = {0x45,0x40,0x21,0x8f,0xfe};

void loop() {
  // Magic begins here
  
  CAN.sendMsgBuf(0x130, 0, sizeof(ignition_on), ignition_on);
  
  Serial.println("Sent Keep-alive Message");
  delay(500);
}
