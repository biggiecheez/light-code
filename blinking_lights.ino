int x = 30;
int val = 2;


void setup ()  {
  pinMode (1, OUTPUT);
  pinMode (2, OUTPUT);
  pinMode (3, OUTPUT);
  pinMode (4, OUTPUT);
  pinMode (5, OUTPUT);

}

void loop() {
 
 for (int i=1;i<5;i++){
  digitalWrite(i,HIGH);
  delay (x);
  digitalWrite(i-1,LOW);
  delay (x);
  if (i==1) {digitalWrite(5,LOW);}
  }
 
 for (int i=5;i>1;i--){
  digitalWrite(i,HIGH);
  delay (x);
  digitalWrite(i+1,LOW);
  delay (x);
  if (i==1) {digitalWrite(1,LOW);}
  }

}
 
 
 
