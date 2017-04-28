int a = 2; // For displaying segment A
int b = 3; // For displaying segment B
int c = 4; // For displaying segment C
int d = 5; // For displaying segment D
int e = 6; // For displaying segment E
int f = 8; // For displaying segment F
int g = 9; // For displaying segment G
int dp = 7; // For displaying segment DP

int addBtn = 10; // Inputpin for adding number
int subBtn = 11; // Inputpin for subtracting number
int clsBtn = 12; // Inputpin for clear number

int counter = 0;

int addBtnState = 0;
int subBtnState = 0;
int clsBtnState = 0;

int addBtnStatePrev = 0;
int subBtnStatePrev = 0;
int clsBtnStatePrev = 0;

void setup() {
  pinMode(a, OUTPUT); // A
  pinMode(b, OUTPUT); // B
  pinMode(c, OUTPUT); // C
  pinMode(d, OUTPUT); // D
  pinMode(e, OUTPUT); // E
  pinMode(f, OUTPUT); // F
  pinMode(g, OUTPUT); // G
  pinMode(dp, OUTPUT); // DP

  pinMode(addBtn, INPUT);
  pinMode(subBtn, INPUT);
  pinMode(clsBtn, INPUT);

  digitalWrite(a, HIGH);
  digitalWrite(b, HIGH);
  digitalWrite(c, HIGH);
  digitalWrite(d, HIGH);
  digitalWrite(e, HIGH);
  digitalWrite(f, HIGH);
  digitalWrite(g, HIGH);
  digitalWrite(dp, HIGH);

  Serial.begin(9600);
}


void displayDigit(int digit) {

  digitalWrite(a, HIGH);
  digitalWrite(b, HIGH);
  digitalWrite(c, HIGH);
  digitalWrite(d, HIGH);
  digitalWrite(e, HIGH);
  digitalWrite(f, HIGH);
  digitalWrite(g, HIGH);
  digitalWrite(dp, HIGH);
  // Conditions for displaying segment A
  if(digit != 1 && digit != 4 && digit != -1 && digit != -4) {
    digitalWrite(a, LOW);
  }

  // Conditions for displaying segment B
  if(digit != 5 && digit != 6 && digit != -5 && digit != -6) {
    digitalWrite(b, LOW);
  }

  // Conditions for displaying segment C
  if(digit != 2 && digit != -2) {
    digitalWrite(c, LOW);
  }

  // Conditions for displaying segment D
  if(digit != 1 && digit != 4 && digit != 7 && digit != 9 && digit != -1 && digit != -4 && digit != -7 && digit != -9) {
    digitalWrite(d, LOW);
  }

  // Conditions for displaying segment E
  if(digit == 0 || digit == 2 || digit == 6 || digit == 8 || digit == -2 || digit == -6 || digit == -8) {
    digitalWrite(e, LOW);
  }

  // Conditions for displaying segment F
  if(digit != 1 && digit != 2 && digit != 3 && digit != 7 && digit != -1 && digit != -2 && digit != -3 && digit != -7) {
    digitalWrite(f, LOW);
  }

  // Conditions for displaying segment G
  if(digit != 0 && digit != 1 && digit != 7 && digit != -1 && digit != -7) {
    digitalWrite(g, LOW);
  }

  // Conditions for displaying segment DP
  if(digit < 0) {
    digitalWrite(dp, LOW);
  }
}



void loop() {
  addBtnState = digitalRead(addBtn);
  subBtnState = digitalRead(subBtn);
  clsBtnState = digitalRead(clsBtn);

  if(addBtnState != addBtnStatePrev) {
    if(addBtnState == HIGH && counter < 9) {
      counter++;
      Serial.println('+');
      Serial.print(counter);
    }
    delay(50);
  }

  if(subBtnState != subBtnStatePrev) {
    if(subBtnState == HIGH && counter > -9) {
      counter--;
      Serial.println('-');
      Serial.print(counter);
    }
    delay(50);
  }

  if(clsBtnState != clsBtnStatePrev) {
    if(clsBtnState == HIGH) {
      counter = 0;
      Serial.println('0');
      Serial.print(counter);
    }
    delay(50);
  }
  
  addBtnStatePrev = addBtnState;
  subBtnStatePrev = subBtnState;
  clsBtnStatePrev = clsBtnState;
  displayDigit(counter);
  
}
