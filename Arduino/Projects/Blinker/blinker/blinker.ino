
 bool turnOn = true;

void setup() {
  pinMode(13, OUTPUT);
  pinMode(12, OUTPUT);
}

void loop() {
  digitalWrite(13, HIGH);
  digitalWrite(12, LOW);
  delay(500);
  digitalWrite(13, LOW);
  if(turnOn) {
    digitalWrite(12, HIGH);
    turnOn = false;
  } else {
    turnOn = true;
  }
  delay(500);
}
