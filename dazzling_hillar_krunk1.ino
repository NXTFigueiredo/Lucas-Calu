// C++ code
//
const int btn1 = 0;
  int cond = 0;

void setup()
{
  pinMode(12, OUTPUT);
  pinMode(13, OUTPUT);
  pinMode(10, OUTPUT);
  pinMode(9, OUTPUT);
  pinMode(btn1, INPUT);
}

void loop()
{
  
  cond = digitalRead(btn1);
  
  if (cond == HIGH) {
  digitalWrite(13,HIGH);
  digitalWrite(12,HIGH);
  digitalWrite(10,HIGH);
  digitalWrite(9,HIGH);
  delay (1000);
  }    
  
  if (btn1 == LOW) {
  digitalWrite(13,LOW);
  digitalWrite(12,LOW);
  digitalWrite(10,LOW);
  digitalWrite(9,LOW);
  delay (1000);
  }  
  
}