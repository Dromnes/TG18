char dir = 'u';
int i = 0;
int j = 255;

void setup() {
  pinMode(10, OUTPUT);
  pinMode(11, OUTPUT);

}

void loop() {
  /*for(int i = 0; i > 255; i++) {
    analogWrite(10, i);
    int u = 255 - i;
    analogWrite(11, u);
  } */

  if(dir == 'u'){
    i = i + 1;
    j = 255 - i;
    if(i == 255) {
      dir = 'd';
      delay(500);
    }
  } else if(dir == 'd') {
    i = i - 1;
    j = 255 - i;
    if(i == 0) {
      dir = 'u';
      delay(500);
    }
  }
  
  analogWrite(10, i);
  analogWrite(11, j);
  delay(5);
  
  

}
