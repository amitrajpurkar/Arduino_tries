int dit=150;
int dah=500;
int endWait=1000;
// digital pins.. 2,4,7,8,12,13,..
int pinForLed=8;
// analog pins.. 3,5,6,9,10,11,..
int pinForGreen=5;

void setup() {
  // put your setup code here, to run once:
  pinMode(pinForLed, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:

  // signal for "S" -- dit
  digitalWrite(pinForLed,HIGH);
  delay(dit);
  digitalWrite(pinForLed,LOW);
  delay(dit);
  Serial.print("S-");
  // signal for "S" -- dit
  digitalWrite(pinForLed,HIGH);
  delay(dit);
  digitalWrite(pinForLed,LOW);
  delay(dit);
  Serial.print("S-");
  // signal for "S" -- dit
  digitalWrite(pinForLed,HIGH);
  delay(dit);
  digitalWrite(pinForLed,LOW);
  delay(dit);
  Serial.print("S-");

  // signal for "O" -- dah
  digitalWrite(pinForLed,HIGH);
  delay(dah);
  digitalWrite(pinForLed,LOW);
  delay(dah);
  Serial.print("O-");
  // signal for "O" -- dah
  digitalWrite(pinForLed,HIGH);
  delay(dah);
  digitalWrite(pinForLed,LOW);
  delay(dah);
  Serial.print("O-");
  // signal for "O" -- dah
  digitalWrite(pinForLed,HIGH);
  delay(dah);
  digitalWrite(pinForLed,LOW);
  delay(dah);
  Serial.print("O-");

  // signal for "S" -- dit
  digitalWrite(pinForLed,HIGH);
  delay(dit);
  digitalWrite(pinForLed,LOW);
  delay(dit);
  Serial.print("S-");
  // signal for "S-" -- dit
  digitalWrite(pinForLed,HIGH);
  delay(dit);
  digitalWrite(pinForLed,LOW);
  delay(dit);
  Serial.print("S-");
  // signal for "S" -- dit
  digitalWrite(pinForLed,HIGH);
  delay(dit);
  digitalWrite(pinForLed,LOW);
  delay(dit);
  Serial.print("S");

  Serial.println("====");


  Serial.print("gradual waxing...");
  // gradually go bright
  for(int i=2;i<256;i*=2){
    analogWrite(pinForGreen,i);
    delay(dah);
  }
  delay(dah);
  Serial.print("gradual waning...");
  delay(dah);
  // gradually go dim
  for(int i = 250; i > 1; i -= 50){
    analogWrite(pinForGreen, i);
    delay(dah);
  }
  Serial.println("end loop, back to SOS...");

  delay(endWait);
}
