int potPin = 2;   
int val = 0;       // variable to store the value coming from the sensor

void setup() {
pinMode(6, OUTPUT);
pinMode(5, OUTPUT);
pinMode(1, OUTPUT);
pinMode(2, OUTPUT);
  pinMode(3, OUTPUT);
  pinMode(4,OUTPUT);// declare the ledPin as an OUTPUT
}

void loop() {
  val = analogRead(potPin);    // read the value from the sensor
  digitalWrite(1, HIGH);  // turn the ledPin on
  delay(val);                  // stop the program for some time
  digitalWrite(1, LOW);   // turn the ledPin off
  delay(val);                  // stop the program for some time
  digitalWrite(2,HIGH);
  delay(val);
  digitalWrite(2,LOW);
  val = analogRead(potPin);
  delay(val);                  // stop the program for some time
  digitalWrite(3,HIGH);
  delay(val);
  digitalWrite(3,LOW);
 delay(val);                  // stop the program for some time
  digitalWrite(4,HIGH);
  delay(val);
  digitalWrite(4,LOW);
 delay(val);                  // stop the program for some time
  digitalWrite(5,HIGH);
  delay(val);
  digitalWrite(5,LOW);
  val = analogRead(potPin);
   delay(val);                  // stop the program for some time
  digitalWrite(6,HIGH);
  delay(val);
  digitalWrite(6,LOW);
   delay(val);                  // stop the program for some time
  digitalWrite(5,HIGH);
  delay(val);
  digitalWrite(5,LOW);
   delay(val);                  // stop the program for some time
  digitalWrite(4,HIGH);
  delay(val);
  digitalWrite(4,LOW);
  val = analogRead(potPin);
   delay(val);                  // stop the program for some time
  digitalWrite(3,HIGH);
  delay(val);
  digitalWrite(3,LOW);
   delay(val);                  // stop the program for some time
  digitalWrite(2,HIGH);
  delay(val);
  val = analogRead(potPin);
  digitalWrite(2,LOW);
  delay(val);
}
