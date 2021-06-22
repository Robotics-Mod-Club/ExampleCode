#include <SoftwareSerial.h>

int state = 0;
int wait = 10;

void setup() {
  Serial.begin(9600);
  #if defined(__AVR_ATtiny85) && (F_CPU == 16000000)
    clock_prescale_set(clock_div_1);
  #endif
}

void loop() {

  if (Serial.available() > 0) {
    inByte = Serial.read();
    Serial.println(inByte);
    
  }
  if (inByte == '1') {
    Serial.println("ifrh");
    }

    

  delay(wait);
}
