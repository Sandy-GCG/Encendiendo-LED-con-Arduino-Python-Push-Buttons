const int ledA = 12;
const int ledB = 8;

void setup() {
  pinMode(ledA, OUTPUT);
  pinMode(ledB, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  if(Serial.available() > 0){
    char serialData = Serial.read();
    
    if(serialData == '1'){
      digitalWrite(ledA, 1);
      delay(10000);
      digitalWrite(ledA, 0);
    }
    
    if(serialData == '2'){
      digitalWrite(ledB, 1);
      delay(10000);
      digitalWrite(ledB, 0);
    }
    
    while(serialData=='a'){
      digitalWrite(ledA,1);
      delay(100);
      digitalWrite(ledA,0);
      digitalWrite(ledB,1);
      delay(100);
      digitalWrite(ledB,0);
    }
  }
}
