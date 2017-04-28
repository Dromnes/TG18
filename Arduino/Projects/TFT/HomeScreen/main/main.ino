#include <UTFT.h>
#include <UTouch.h>

//==== Create objects
UTFT    myGLCD(INFINIT32, 38, 39, 40, 41); // Parameters should be adjusted to your Display/Shield model
UTouch  myTouch(6, 5, 4, 3, 2);

//==== Defining variables
extern uint8_t SmallFont[];
extern uint8_t BigFont[];
extern uint8_t SevenSegNumFont[];

extern unsigned int bird01[0x41A];

int x, y;

char currentPage;

// Floppy Bird
int xP = 319;
int yP = 100;
int yB = 30;
int fallRateInt = 0;
float fallRate = 0;
int score = 0;
const int button = 14;
int buttonState = 0;

void setup() {
  // Initial setup
  myGLCD.InitLCD();
  myGLCD.clrScr();
  myTouch.InitTouch();
  myTouch.setPrecision(PREC_MEDIUM);

  // Defining Pin Modes
  pinMode(button, INPUT);

  drawHomeScreen(); // Draws the home screen
  currentPage = '0'; // Indicates that we are at Home Screen
}

// drawHomeScreen - Custom Function
void drawHomeScreen(){
  // Title
  myGLCD.setBackColor(0, 0, 0); // Sets the background color of the area where the text will be printed to black
  myGLCD.setColor(255, 255, 255); // Sets color to white
  myGLCD.setFont(BigFont); // Sets font to big
  myGLCD.print("Arduino TFT Tutorial", CENTER, 10); // Prints the string on the screen
  myGLCD.setColor(255, 0, 0); // Sets color to red
  myGLCD.drawLine(0, 32, 319, 32); // Draws the red line
  myGLCD.setColor(255, 255, 255); // Sets the color to white
  myGLCD.setFont(SmallFont); // Sets the font to small
  myGLCD.print("by HowToMechatronics.com", CENTER, 41); // Prints the string
  myGLCD.setFont(BigFont);
  myGLCD.print("Select Example", CENTER, 64);

  // Button Distance Sensor
  myGLCD.setColor(16, 167, 103); // Sets green color
  myGLCD.fillRoundRect(35, 90, 285, 130); // Draws filled rounded rectangles
  myGLCD.setColor(255, 255, 255); // Sets color to white
  myGLCD.drawRoundRect(35, 90, 285, 130); // Draws rounded rectangles without a fill, like a frame
  myGLCD.setFont(BigFont); // Sets font to big
  myGLCD.setBackColor(16, 167, 103); // Sets the background color of the area where the text will be printed to green, same as the button
  myGLCD.print("DISTANCE SENSOR", CENTER, 102); // Prints the string

  // Button RGB LED Control
  myGLCD.setColor(16, 167, 103);
  myGLCD.fillRoundRect(35, 140, 285, 180);
  myGLCD.setColor(255, 255, 255);
  myGLCD.drawRoundRect(35, 140, 285, 180);
  myGLCD.setFont(BigFont);
  myGLCD.setBackColor(16, 167, 103);
  myGLCD.print("RGB LED CONTROL", CENTER, 152);

  // Button Floppy Bird
  myGLCD.setColor(16, 167, 103);
  myGLCD.fillRoundRect(35, 190, 285, 230);
  myGLCD.setColor(255, 255, 255);
  myGLCD.drawRoundRect(35, 190, 285, 230);
  myGLCD.setFont(BigFont);
  myGLCD.setBackColor(16, 167, 103);
  myGLCD.print("BURDUINO GAME", CENTER, 202);
}

void loop() {
  // put your main code here, to run repeatedly:

}
