int a_1 = 2; // For displaying segment A
int b_1 = 3; // For displaying segment B
int c_1 = 4; // For displaying segment C
int d_1 = 5; // For displaying segment D
int e_1 = 6; // For displaying segment E
int f_1 = 8; // For displaying segment F
int g_1 = 9; // For displaying segment G

int a_10 = 2; // For displaying segment A
int b_10 = 3; // For displaying segment B
int c_10 = 4; // For displaying segment C
int d_10 = 5; // For displaying segment D
int e_10 = 6; // For displaying segment E
int f_10 = 8; // For displaying segment F
int g_10 = 9; // For displaying segment G

void setup() {
  pinMode(a_1, OUTPUT); // A
  pinMode(b_1, OUTPUT); // B
  pinMode(c_1, OUTPUT); // C
  pinMode(d_1, OUTPUT); // D
  pinMode(e_1, OUTPUT); // E
  pinMode(f_1, OUTPUT); // F
  pinMode(g_1, OUTPUT); // G
  
  pinMode(a_10, OUTPUT); // A
  pinMode(b_10, OUTPUT); // B
  pinMode(c_10, OUTPUT); // C
  pinMode(d_10, OUTPUT); // D
  pinMode(e_10, OUTPUT); // E
  pinMode(f_10, OUTPUT); // F
  pinMode(g_10, OUTPUT); // G

  Serial.begin(9600);
}


void displayDigit(int digit) {

  digitalWrite(a_1, HIGH);
  digitalWrite(b_1, HIGH);
  digitalWrite(c_1, HIGH);
  digitalWrite(d_1, HIGH);
  digitalWrite(e_1, HIGH);
  digitalWrite(f_1, HIGH);
  digitalWrite(g_1, HIGH);

  
  // Conditions for displaying segment A
  if(digit != 1 && digit != 4) {
    digitalWrite(a_1, LOW);
    Serial.println('A');
  }

  // Conditions for displaying segment B
  if(digit != 5 && digit != 6) {
    digitalWrite(b_1, LOW);
    Serial.println('B');
  }

  // Conditions for displaying segment C
  if(digit != 2) {
    digitalWrite(c_1, LOW);
    Serial.println('C');
  }

  // Conditions for displaying segment D
  if(digit != 1 && digit != 4 && digit != 7 && digit != 9) {
    digitalWrite(d_1, LOW);
    Serial.println('D');
  }

  // Conditions for displaying segment E
  if(digit == 0 || digit == 2 || digit == 6 || digit == 8) {
    digitalWrite(e_1, LOW);
    Serial.println('E');
  }

  // Conditions for displaying segment F
  if(digit != 1 && digit != 2 && digit != 3 && digit != 7) {
    digitalWrite(f_1, LOW);
    Serial.println('F');
  }

  // Conditions for displaying segment G
  if(digit != 0 && digit != 1 && digit != 7) {
    digitalWrite(g_1, LOW);
    Serial.println('G');
  }

  
}



void loop() {
  int i;
  for(i = 0; i < 10; i++) {
    displayDigit(i);
    Serial.println(i);
    Serial.println();
    delay(1500);
  }
}
