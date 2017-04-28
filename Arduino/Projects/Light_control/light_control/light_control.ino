

int on_off_switch = 14;
int up_switch = 2;
int down_switch = 3;
int wht_switch = 4;
int bl_switch = 7;
int yllw_switch = 8;
int grn_switch = 12;
int rd_switch = 13;

int wht_LED = 5;
int bl_LED = 6;
int yllw_LED = 9;
int grn_LED = 10;
int rd_LED = 11;

int LED_freq = 5;
bool state = 0;

bool wht = 0;
bool bl = 0;
bool yllw = 0;
bool grn = 0;
bool rd = 0;

void setup() {
  pinMode(on_off_switch, INPUT);
  pinMode(up_switch, INPUT);
  pinMode(down_switch, INPUT);
  pinMode(wht_switch, INPUT);
  pinMode(bl_switch, INPUT);
  pinMode(yllw_switch, INPUT);
  pinMode(grn_switch, INPUT);
  pinMode(rd_switch, INPUT);
  
  pinMode(wht_LED, OUTPUT);
  pinMode(bl_LED, OUTPUT);
  pinMode(yllw_LED, OUTPUT);
  pinMode(grn_LED, OUTPUT);
  pinMode(rd_LED, OUTPUT);

  analogWrite(wht_LED, 0);
  analogWrite(bl_LED, 0);
  analogWrite(yllw_LED, 0);
  analogWrite(grn_LED, 0);
  analogWrite(rd_LED, 0);

  Serial.begin(9600);
  Serial.println("Start");
}

void loop() {
  if(on_off_switch ==  HIGH && state == 0) {
    Serial.println("State: " + state);
    state = 1;
    Serial.println("State: " + state);
  }
  else if(on_off_switch == HIGH) {
    state = 0;
  }

  if(up_switch == HIGH && LED_freq != 8) {
    LED_freq ++;
  }

  if(down_switch == HIGH && LED_freq != 0) {
    LED_freq --;
  }

  if(wht_switch == HIGH && wht == 0) {
    bl = 0;
    yllw = 0;
    grn = 0;
    rd = 0;
    
    wht = 1;
  }

  if(bl_switch == HIGH && bl == 0) {
    wht = 0;
    yllw = 0;
    grn = 0;
    rd = 0;
    
    bl = 1;
  }

  if(yllw_switch == HIGH && yllw == 0) {
    wht = 0;
    bl = 0;
    grn = 0;
    rd = 0;
    
    yllw = 1;
  }

  if(grn_switch == HIGH && grn == 0) {
    wht = 0;
    bl = 0;
    yllw = 0;
    rd = 0;
    
    grn = 1;
  }

  if(rd_switch == HIGH && rd == 0) {
    wht = 0;
    bl = 0;
    yllw = 0;
    grn = 0;
    
    rd = 1;
  }

  if(wht == 1 && state == 1) {
    analogWrite(bl_LED, 0);
    analogWrite(yllw_LED, 0);
    analogWrite(grn_LED, 0);
    analogWrite(rd_LED, 0);

    analogWrite(wht_LED, (LED_freq * 32));
  }

  if(bl == 1 && state == 1) {
    analogWrite(wht_LED, 0);
    analogWrite(yllw_LED, 0);
    analogWrite(grn_LED, 0);
    analogWrite(rd_LED, 0);

    analogWrite(bl_LED, (LED_freq * 32));
  }

  if(yllw == 1 && state == 1) {
    analogWrite(wht_LED, 0);
    analogWrite(bl_LED, 0);
    analogWrite(grn_LED, 0);
    analogWrite(rd_LED, 0);

    analogWrite(yllw_LED, (LED_freq * 32));
  }

  if(grn == 1 && state == 1) {
    analogWrite(wht_LED, 0);
    analogWrite(bl_LED, 0);
    analogWrite(yllw_LED, 0);
    analogWrite(rd_LED, 0);

    analogWrite(grn_LED, (LED_freq * 32));
  }

  if(rd == 1 && state == 1) {
    analogWrite(wht_LED, 0);
    analogWrite(bl_LED, 0);
    analogWrite(yllw_LED, 0);
    analogWrite(grn_LED, 0);

    analogWrite(rd_LED, (LED_freq * 32));
  }
}
