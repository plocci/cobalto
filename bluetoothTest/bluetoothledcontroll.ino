#include <SoftwareSerial.h>
String CMD;
String cmd1 = "1";
void setup() {
  pinMode(13, OUTPUT);
  Serial.begin(9600);
  Serial1.begin(9600);
}

void loop() {  
   if (Serial1.available()) {
    CMD = Serial1.readString();
    if (CMD == cmd1)
      digitalWrite(13, HIGH);
    else
      digitalWrite(13, LOW);
    Serial.print(CMD);
  }
}
