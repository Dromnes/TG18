#include <SoftwareSerial.h>

void setup() {
  Serial.begin(9600);
  Serial.println("--- Start Serial Monitor SEND_RCVE ---");
    Serial.println(" Type in Box above, . ");
  Serial.println("(Decimal)(Hex)(Character)");
  Serial.println();
  
  pinMode(A2, INPUT);
  pinMode(10, OUTPUT);
}

void loop() {
  int inVal = analogRead(A2);
  int outVal = inVal * 0.25;
  analogWrite(10, outVal);
  Serial.println(inVal);
  Serial.println(outVal);
}
