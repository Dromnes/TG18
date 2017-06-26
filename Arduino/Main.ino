
#include "Functions.h"

int rPin = 6; //Red light pin
int gPin = 5; //Green light pin
int bPin = 3; //Blue light pin

int rValue; //Analog value for rPin
int gValue; //Analog value for gPin
int bValue; //Analog value for bPin

int lightMode = 0;


void setup()
{
  pinMode(rPin, OUTPUT);
  pinMode(gPin, OUTPUT);
  pinMode(bPin, OUTPUT);
}

void loop()
{
  switch (lightMode)
  {
    case 0: //Ligth on
      analogWrite(rPin, rValue);
      analogWrite(gPin, gValue);
      analogWrite(bPin, bValue);
      break;
    case 1: //Flash
      flash(16, rPin, gPin, bPin);
      break;
    case 2: //Strobe
      strobe(16, rPin, gPin, bPin);
      break;
    case 3: //Fade
      fade(16, rPin, gPin, bPin);
      break;
    case 4: //Smooth
      smooth(16, rPin, gPin, bPin);
      break;
    default
      break;
  }
}
