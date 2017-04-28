// Define digital outputs

// Time
#define timeHourA1 0
#define timeHourB1 1
#define timeHourB2 2
#define timeHourB4 3
#define timeHourB8 4
#define timeMinA1  5
#define timeMinA2  6
#define timeMinA4  7
#define timeMinB1  8
#define timeMinB2  9
#define timeMinB4  10
#define timeMinB8  11

// Date
#define dateMonA1  12
#define dateMonA2  13
#define dateMonB1  14
#define dateMonB2  15
#define dateMonB4  16
#define dateMonB8  17
#define dateDayA1  18
#define dateDayB1  19
#define dateDayB2  20


void setup() {
  pinMode(timeHourA1, OUTPUT);
  pinMode(timeHourB1, OUTPUT);
  pinMode(timeHourB2, OUTPUT);
  pinMode(timeHourB4, OUTPUT);
  pinMode(timeHourB8, OUTPUT);
  pinMode(timeMinA1, OUTPUT);
  pinMode(timeMinA2, OUTPUT);
  pinMode(timeMinA4, OUTPUT);
  pinMode(timeMinB1, OUTPUT);
  pinMode(timeMinB2, OUTPUT);
  pinMode(timeMinB4, OUTPUT);
  pinMode(timeMinB8, OUTPUT);
  pinMode(dateMonA1, OUTPUT);
  pinMode(dateMonA2, OUTPUT);
  pinMode(dateMonB1, OUTPUT);
  pinMode(dateMonB2, OUTPUT);
  pinMode(dateMonB4, OUTPUT);
  pinMode(dateMonB8, OUTPUT);
  pinMode(dateDayA1, OUTPUT);
  pinMode(dateDayB1, OUTPUT);
  pinMode(dateDayB2, OUTPUT);
}

int timeHour = 8;

void loop() {
  if(timeHour >= 10) {
    digitalWrite(timeHourA1, HIGH);
  } else {
    digitalWrite(timeHourA1, LOW);
  }

  
  if(timeHour == 1 || timeHour == 3 || timeHour == 5 || timeHour == 7 || timeHour == 9 || timeHour == 11) {
    digitalWrite(timeHourB1, HIGH);
  } else {
    digitalWrite(timeHourB1, LOW);
  }

  
  if(timeHour == 2 || timeHour == 3 || timeHour == 6 || timeHour == 7 || timeHour == 12) {
    digitalWrite(timeHourB2, HIGH);
  } else {
    digitalWrite(timeHourB2, LOW);
  }

  
  if(timeHour == 4 || timeHour == 5 || timeHour == 6 || timeHour == 7) {
    digitalWrite(timeHourB4, HIGH);
  } else {
    digitalWrite(timeHourB4, LOW);
  }

  
  if(timeHour == 8 || timeHour == 9) {
    digitalWrite(timeHourB8, HIGH);
  } else {
    digitalWrite(timeHourB8, LOW);
  }
}
