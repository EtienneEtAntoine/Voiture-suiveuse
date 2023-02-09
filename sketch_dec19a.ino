//-- MOTEUR A --
int ENA=13; //Connecté à Arduino pin 9(sortie PWM)
int IN1=4; //Connecté à Arduino pin 4
int IN2=5;
//Connecté à Arduino pin 5
 
//-- MOTEUR B --
int ENB=12; //Connecté à Arduino pin 10(Sortie PWM)
int IN3=6; //Connecté à Arduino pin 6
int IN4=7; //Connecté à Arduino pin 7

const int C1=3;
const int C2=4;
const int C3=5;
const int C4=6;
const int C5=7;
const int C6=8;
const int C7=9;
const int C8=10;
const int C9=11;

int val1=0;
int val2=0;
int val3=0;
int val4=0;
int val5=0;
int val6=0;
int val7=0;
int val8=0;
int val9=0;


void setup() {
pinMode(ENA,OUTPUT); // Configurer
pinMode(ENB,OUTPUT); // les broches
pinMode(IN1,OUTPUT); // comme sortie
pinMode(IN2,OUTPUT);
pinMode(IN3,OUTPUT);
pinMode(IN4,OUTPUT);
pinMode(C1,INPUT);
pinMode(C2,INPUT);
pinMode(C3,INPUT);
pinMode(C4,INPUT);
pinMode(C5,INPUT);
pinMode(C6,INPUT);
pinMode(C7,INPUT);
pinMode(C8,INPUT);
pinMode(C9,INPUT);
digitalWrite(ENA,LOW);// Moteur A - Ne pas tourner
digitalWrite(ENB,LOW);// Moteur B - Ne pas tourner
 
// Direction du Moteur A
digitalWrite(IN1,LOW);
digitalWrite(IN2,HIGH);
 
// Direction du Moteur B
digitalWrite(IN3,LOW);
digitalWrite(IN4,HIGH); }
 
void loop() {
 
//TOUT DROIT:
  // Moteur A - Plein régime
  val1 = digitalRead(C1);
  val2 = digitalRead(C2);
  val3 = digitalRead(C3);
  val4 = digitalRead(C4);
  val5 = digitalRead(C5);
  val6 = digitalRead(C6);
  val7 = digitalRead(C7);
  val8 = digitalRead(C8);
  val9 = digitalRead(C9);

// Direction du Moteur A
digitalWrite(IN1,LOW);
digitalWrite(IN2,HIGH);
 
// Direction du Moteur B
digitalWrite(IN3,LOW);
digitalWrite(IN4,HIGH);

  if (val1 = HIGH){
    analogWrite(ENA,255);
    // Moteur B - plein-régime
    analogWrite(ENB,255);
  }
  else if(val2= HIGH){
    analogWrite(ENA,255);
    analogWrite(ENB,190);
  }
  else if(val3= HIGH){
    analogWrite(ENA,255);
    analogWrite(ENB,0);
  }
  else if(val4= HIGH){
    // Direction du Moteur B
    digitalWrite(IN3,HIGH);
    digitalWrite(IN4,LOW);
    
    analogWrite(ENA,255);
    analogWrite(ENB,150);
  }
  else if(val5= HIGH){
    // Direction du Moteur B
    digitalWrite(IN3,HIGH);
    digitalWrite(IN4,LOW);
    
    analogWrite(ENA,255);
    analogWrite(ENB,255);
  }
  else if(val6= HIGH){
    // Direction du Moteur A
    digitalWrite(IN1,HIGH);
    digitalWrite(IN2,LOW);
    analogWrite(ENA,255);
    analogWrite(ENB,255);
  }
  else if(val7= HIGH){
    // Direction du Moteur A
    digitalWrite(IN1,HIGH);
    digitalWrite(IN2,LOW);
    analogWrite(ENA,150);
    analogWrite(ENB,255);
  }
  else if(val8= HIGH){
    analogWrite(ENA,0);
    analogWrite(ENB,255);
  }
  else if(val9= HIGH){
    analogWrite(ENA,190);
    analogWrite(ENB,255);
  }
}
