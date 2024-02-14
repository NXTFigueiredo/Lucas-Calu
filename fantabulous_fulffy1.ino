// C++ code
//
void setup()
{
  pinMode(13, OUTPUT);//verm1
  pinMode(11, OUTPUT);//amar1
  pinMode(9, OUTPUT);//verd1
  pinMode(6, OUTPUT);//verm2
  pinMode(4, OUTPUT);//amar2
  pinMode(2, OUTPUT);//verd2
}

void loop()
{
  digitalWrite(13, HIGH);
  digitalWrite(11, LOW);
  digitalWrite(9, LOW);
  digitalWrite(6, LOW);
  digitalWrite(4, LOW);
  digitalWrite(2, HIGH);
  delay(3000);
  
  digitalWrite(13, HIGH);
  digitalWrite(11, LOW);
  digitalWrite(9, LOW);
  digitalWrite(6, LOW);
  digitalWrite(4, HIGH);
  digitalWrite(2, LOW);
  delay(3000);
  
  digitalWrite(13, LOW);
  digitalWrite(11, LOW);
  digitalWrite(9, HIGH);
  digitalWrite(6, HIGH);
  digitalWrite(4, LOW);
  digitalWrite(2, LOW);
  delay(3000);
  
  digitalWrite(13, LOW);
  digitalWrite(11, HIGH);
  digitalWrite(9, LOW);
  digitalWrite(6, HIGH);
  digitalWrite(4, LOW);
  digitalWrite(2, LOW);
  delay(3000);
}