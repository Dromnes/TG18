void flash(int interval, int rPin, int gPin, int bPin) {
  analogWrite(rPin, 255);
  analogWrite(gPin, 0);
  analogWrite(bPin, 0);
  delay(interval);

  analogWrite(rPin, 0);
  analogWrite(gPin, 255);
  analogWrite(bPin, 0);
  delay(interval);

  analogWrite(rPin, 0);
  analogWrite(gPin, 0);
  analogWrite(bPin, 255);
  delay(interval);

  analogWrite(rPin, 255);
  analogWrite(gPin, 255);
  analogWrite(bPin, 0);
  delay(interval);

  analogWrite(rPin, 255);
  analogWrite(gPin, 0);
  analogWrite(bPin, 255);
  delay(interval);

  analogWrite(rPin, 0);
  analogWrite(gPin, 255);
  analogWrite(bPin, 255);
  delay(interval);

  analogWrite(rPin, 255);
  analogWrite(gPin, 255);
  analogWrite(bPin, 255);
  delay(interval);
}

void strobe(int strobeSpeed, int rPin, int gPin, int bPin){
  for(int strobeValue = 0; strobeValue < 255; strobeValue += strobeSpeed) {
    analogWrite(rPin, strobeValue);
    analogWrite(gPin, strobeValue);
    analogWrite(bPin, strobeValue);
    delay(50);
  }

  for(int strobeValue = 255; strobeValue > 0; strobeValue -= strobeSpeed) {
    analogWrite(rPin, strobeValue);
    analogWrite(gPin, strobeValue);
    analogWrite(bPin, strobeValue);
    delay(50);
  }
}

void fade(int fadeSpeed, int rPin, int gPin, int bPin){
  for(int fadeValue = 0; fadeValue < 255; fadeValue += fadeSpeed) {
    analogWrite(rPin, fadeValue);
    analogWrite(gPin, 0);
    analogWrite(bPin, 0);
    delay(50);
  }

  for(int fadeValue = 255; fadeValue > 0; fadeValue -= fadeSpeed) {
    analogWrite(rPin, fadeValue);
    analogWrite(gPin, 0);
    analogWrite(bPin, 0);
    delay(50);
  }

  for(int fadeValue = 0; fadeValue < 255; fadeValue += fadeSpeed) {
    analogWrite(rPin, 0);
    analogWrite(gPin, fadeValue);
    analogWrite(bPin, 0);
    delay(50);
  }

  for(int fadeValue = 255; fadeValue > 0; fadeValue -= fadeSpeed) {
    analogWrite(rPin, 0);
    analogWrite(gPin, fadeValue);
    analogWrite(bPin, 0);
    delay(50);
  }

  for(int fadeValue = 0; fadeValue < 255; fadeValue += fadeSpeed) {
    analogWrite(rPin, 0);
    analogWrite(gPin, 0);
    analogWrite(bPin, fadeValue);
    delay(50);
  }

  for(int fadeValue = 255; fadeValue > 0; fadeValue -= fadeSpeed) {
    analogWrite(rPin, 0);
    analogWrite(gPin, 0);
    analogWrite(bPin, fadeValue);
    delay(50);
  }
}

void smooth(int smoothSpeed, int rPin, int gPin, int bPin){
  int rValue = 255;
  int gValue = 0;
  int bValue = 0;

  for(gValue; gValue < 255; gValue += smoothSpeed) {
    analogWrite(rPin, rValue);
    analogWrite(gPin, gValue);
    analogWrite(bPin, bValue);
    delay(50);
  }

  for(rValue; rValue > 0; rValue -= smoothSpeed) {
    analogWrite(rPin, rValue);
    analogWrite(gPin, gValue);
    analogWrite(bPin, bValue);
    delay(50);
  }

  for(bValue; bValue < 255; bValue += smoothSpeed) {
    analogWrite(rPin, rValue);
    analogWrite(gPin, gValue);
    analogWrite(bPin, bValue);
    delay(50);
  }

  for(gValue; gValue > 0; gValue -= smoothSpeed) {
    analogWrite(rPin, rValue);
    analogWrite(gPin, gValue);
    analogWrite(bPin, bValue);
    delay(50);
  }

  for(rValue; rValue < 255; rValue += smoothSpeed) {
    analogWrite(rPin, rValue);
    analogWrite(gPin, gValue);
    analogWrite(bPin, bValue);
    delay(50);
  }

  for(bValue; bValue > 0; bValue -= smoothSpeed) {
    analogWrite(rPin, rValue);
    analogWrite(gPin, gValue);
    analogWrite(bPin, bValue);
    delay(50);
  }
}
