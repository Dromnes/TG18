int a = 2; // For displaying segment A
int b = 3; // For displaying segment B
int c = 4; // For displaying segment C
int d = 5; // For displaying segment D
int e = 6; // For displaying segment E
int f = 8; // For displaying segment F
int g = 9; // For displaying segment G
int dp = 7; // For displaying segment DP

void setup() {
  pinMode(a, OUTPUT); // A
  pinMode(b, OUTPUT); // B
  pinMode(c, OUTPUT); // C
  pinMode(d, OUTPUT); // D
  pinMode(e, OUTPUT); // E
  pinMode(f, OUTPUT); // F
  pinMode(g, OUTPUT); // G
  pinMode(dp, OUTPUT); // DP

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
  if(digit != 1 && digit != 4) {
    digitalWrite(a, LOW);
    Serial.println('A');
  }

  // Conditions for displaying segment B
  if(digit != 5 && digit != 6) {
    digitalWrite(b, LOW);
    Serial.println('B');
  }

  // Conditions for displaying segment C
  if(digit != 2) {
    digitalWrite(c, LOW);
    Serial.println('C');
  }

  // Conditions for displaying segment D
  if(digit != 1 && digit != 4 && digit != 7 && digit != 9) {
    digitalWrite(d, LOW);
    Serial.println('D');
  }

  // Conditions for displaying segment E
  if(digit == 0 || digit == 2 || digit == 6 || digit == 8) {
    digitalWrite(e, LOW);
    Serial.println('E');
  }

  // Conditions for displaying segment F
  if(digit != 1 && digit != 2 && digit != 3 && digit != 7) {
    digitalWrite(f, LOW);
    Serial.println('F');
  }

  // Conditions for displaying segment G
  if(digit != 0 && digit != 1 && digit != 7) {
    digitalWrite(g, LOW);
    Serial.println('G');
  }
}



void loop() {
  int i;
  for(i = 0; i < 10; i++) {
    displayDigit(i);
    Serial.println(i);
    Serial.println();
    if(i % 2 == 0) {
      digitalWrite(dp, LOW);
    }
    else {
      digitalWrite(dp, HIGH);
    }
    delay(1500);
  }
}
