#include <Keypad.h>

const byte ROWS = 4; // Four rows
const byte COLS = 3; // Three columns

// Define the Keymap
char keys[ROWS][COLS] = {
  { '1' , '2' , '3' },
  { '4' , '5' , '6' },
  { '7' , '8' , '9' },
  { '*' , '0' , '#' }
};

// Connect keypad ROW0, ROW1, ROW2 and ROW3 to these Arduino pins.
byte rowPins[ROWS] = { 8, 7, 6, 5 };
// Connect keypad COL0, COL1 and COL2 to these Arduino pins.
byte colPins[COLS] = { 4, 3, 2 };

// Create the keypad
Keypad kpd = Keypad( makeKeymap(keys), rowPins, colPins, ROWS, COLS );

#define relay 9
#define ledPin 13


int key_1 = -1;
int key_2 = -1;
int key_3 = -1;
int key_4 = -1;
int code_1 = 2;
int code_2 = 9;
int code_3 = 8;
int code_4 = 7;
bool access = false;

void setup() {
  pinMode(relay, OUTPUT);
  digitalWrite(relay, LOW);
  pinMode(ledPin, OUTPUT);
  Serial.begin(9600);
}

void resetKeys() {
  key_1 = -1;
  key_2 = -1;
  key_3 = -1;
  key_4 = -1;
}

void loop() {
  char key = kpd.getKey();
  if(key) {
    Serial.println(key);
    if(key != '*' && key != '#') {
      if(key_1 == -1){
        key_1 = key;
      } else if(key_2 == -1) {
        key_2 = key;
      } else if(key_3 == -1) {
        key_3 = key;
      } else if(key_4 == -1) {
        key_4 = key;

        if(key_1 == code_1 + 48 && key_2 == code_2 + 48 && key_3 == code_3 + 48 && key_4 == code_4 + 48) {
          Serial.println("Access: APPROVED");
          access = true;
          digitalWrite(relay, HIGH);
          digitalWrite(ledPin, HIGH);
          Serial.println(access);
          delay(250);
          access = false;
          digitalWrite(relay, LOW);
          digitalWrite(ledPin, LOW);
          Serial.println(access);
          resetKeys();
        } else {
          Serial.println("Access: DENIED");
          digitalWrite(ledPin, HIGH);
          delay(200);
          digitalWrite(ledPin, LOW);
          delay(200);
          digitalWrite(ledPin, HIGH);
          delay(200);
          digitalWrite(ledPin, LOW);
          delay(200);
          digitalWrite(ledPin, HIGH);
          resetKeys();
        }
      }
    } else {
      resetKeys();
    }
  }
  
  /*if(key) {
    switch(key) {
      case '*':
        digitalWrite(ledPin, LOW);
        break;
      case '#':
        digitalWrite(ledPin, HIGH);
        break;
      default:
        Serial.println(key);
    }
  }*/
}
