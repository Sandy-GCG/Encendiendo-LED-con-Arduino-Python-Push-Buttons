const int ledA = 12;
const int ledB = 8;
const int pushA = 4;
const int pushB = 2;

const int led1 = 12;
const int led2 = 8;

int contA = 0;
int contB = 0;

char estado;

void setup() {
  pinMode(pushA, INPUT);
  pinMode(pushB, INPUT);
  pinMode(ledA, OUTPUT);
  pinMode(ledB, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  int estA = digitalRead(pushA);
  int estB = digitalRead(pushB);

  if(estA == 0){
    if(contA == 5){
      contA = 1;
    }
    contA++;
    if(contA == 3){
      Serial.println("Segundo Pulso --- LED 1 ENCENDIDA");
      digitalWrite(ledA, HIGH);
      delay(5000);
      digitalWrite(ledA, LOW);
      Serial.println("LED 1 APAGADA");
    }
    else{
      if(contA == 5){
        Serial.println("Segundo Pulso --- LED 2 ENCENDIDA");
        digitalWrite(ledB, HIGH);
        delay(5000);
        digitalWrite(ledB, LOW);
        Serial.println("LED 2 APAGADA");
      }
    }
    while(!digitalRead(pushA));
  }

  if(estB == 0){
    if(contB == 5){
      contB = 1;
    }
    contB++;
    if(contB == 3){
      Serial.println("Segundo Pulso --- LED 1 ENCENDIDA");
      digitalWrite(ledA, HIGH);
      delay(5000);
      digitalWrite(ledA, LOW);
      Serial.println("LED 1 APAGADA");
    }
    else{
      if(contB == 5){
        Serial.println("Segundo Pulso --- LED 2 ENCENDIDA");
        digitalWrite(ledB, HIGH);
        delay(5000);
        digitalWrite(ledB, LOW);
        Serial.println("LED 2 APAGADA");
      }
    }
    while(!digitalRead(pushB));
  }
}
