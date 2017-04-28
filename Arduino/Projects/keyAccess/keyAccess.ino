#include <AddicoreRFID.h>
#include <SPI.h>
#include <Keypad.h>

#define  uchar unsigned char
#define uint  unsigned int

//4 bytes tag serial number, the first 5 bytes for the checksum byte
uchar serNumA[5];

uchar fifobytes;
uchar fifoValue;

AddicoreRFID myRFID; // create AddicoreRFID object to control the RFID module

/////////////////////////////////////////////////////////////////////
//set the pins
/////////////////////////////////////////////////////////////////////
const int chipSelectPin = 10;
const int NRSTPD = 5;

//Maximum length of the array
#define MAX_LEN 16




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
byte rowPins[ROWS] = { 9, 8, 7, 6 };
// Connect keypad COL0, COL1 and COL2 to these Arduino pins.
byte colPins[COLS] = { 4, 3, 2 };

// Create the keypad
Keypad kpd = Keypad( makeKeymap(keys), rowPins, colPins, ROWS, COLS );

#define relay 14
#define ledPin 15


int key_1 = -1;
int key_2 = -1;
int key_3 = -1;
int key_4 = -1;
int code_1 = 1;
int code_2 = 3;
int code_3 = 3;
int code_4 = 7;
bool access = false;


void setup() {
   Serial.begin(9600);                        // RFID reader SOUT pin connected to Serial RX pin at 9600bps 
 
  // start the SPI library:
  SPI.begin();
  
  pinMode(chipSelectPin,OUTPUT);              // Set digital pin 10 as OUTPUT to connect it to the RFID /ENABLE pin 
    digitalWrite(chipSelectPin, LOW);         // Activate the RFID reader
  pinMode(NRSTPD,OUTPUT);                     // Set digital pin 10 , Not Reset and Power-down
    digitalWrite(NRSTPD, HIGH);

  myRFID.AddicoreRFID_Init();  

  
  pinMode(relay, OUTPUT);
  digitalWrite(relay, LOW);
  pinMode(ledPin, OUTPUT);
}

void resetKeys() {
  key_1 = -1;
  key_2 = -1;
  key_3 = -1;
  key_4 = -1;
}

void loop() {
  uchar i, tmp, checksum1;
  uchar status;
        uchar str[MAX_LEN];
        uchar RC_size;
        uchar blockAddr;  //Selection operation block address 0 to 63
        String mynum = "";

        str[1] = 0x4400;
        
  //Find tags, return tag type
  status = myRFID.AddicoreRFID_Request(PICC_REQIDL, str); 

  //Anti-collision, return tag serial number 4 bytes
  status = myRFID.AddicoreRFID_Anticoll(str);

  if (status == MI_OK) {
    if(str[0] == 165 && str[1] == 127 && str[2] == 206 && str[3] == 101 && str[4] == 113) {
      Serial.print("Hello Henning!\n");
      Serial.println(str[1]);
      Serial.println("Access: APPROVED");
      digitalWrite(relay, HIGH);
      digitalWrite(ledPin, HIGH);
      delay(250);
      digitalWrite(relay, LOW);
      digitalWrite(ledPin, LOW);
      resetKeys();
    }
  }
  
}







/* #include <Keypad.h>

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
byte rowPins[ROWS] = { 9, 8, 7, 6 };
// Connect keypad COL0, COL1 and COL2 to these Arduino pins.
byte colPins[COLS] = { 4, 3, 2 };

// Create the keypad
Keypad kpd = Keypad( makeKeymap(keys), rowPins, colPins, ROWS, COLS );

#define relay 14
#define ledPin 15


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
  }*/ /*
} */
