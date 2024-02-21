const int btn1 = 0;
const int btn2 = 1;
const int btn3 = 2;

int cond = 0;
int cond1 = 0;
int cond2 = 0;

void setup()
{
  pinMode(6, OUTPUT);
  pinMode(5, OUTPUT);
  pinMode(11, OUTPUT);
  pinMode(10, OUTPUT);
  pinMode(btn1, INPUT);
  
}

void loop()
{
  
  cond  = digitalRead(btn1);
  cond1  = digitalRead(btn2);
  cond2  = digitalRead(btn3);
  
  if(cond == HIGH ) {  
  
  digitalWrite(6, HIGH);
  digitalWrite(5, HIGH);
  digitalWrite(11, LOW);
  digitalWrite(10, LOW);
  delay(300);
  digitalWrite(6, LOW);
  digitalWrite(5, LOW);
  digitalWrite(11, LOW);
  digitalWrite(10, LOW);
  delay(300);
    
  }
  
  if(cond == LOW ) {  
  
  digitalWrite(6, LOW);
  digitalWrite(5, LOW);
  digitalWrite(11, LOW);
  digitalWrite(10, LOW);
  delay(100);
    
  }
  
  
  
  if(cond1 == HIGH ) {  
  
  digitalWrite(6, LOW);
  digitalWrite(5, LOW);
  digitalWrite(11, HIGH);
  digitalWrite(10, HIGH);
  delay(300);
  digitalWrite(6, LOW);
  digitalWrite(5, LOW);
  digitalWrite(11, LOW);
  digitalWrite(10, LOW);
  delay(300);  
  }
  
  if(cond1 == LOW ) {  
  
  digitalWrite(6, LOW);
  digitalWrite(5, LOW);
  digitalWrite(11, LOW);
  digitalWrite(10, LOW);
  delay(100);
    
  }
  
  
  if(cond2 == HIGH ) {  
  
  digitalWrite(6, HIGH);
  digitalWrite(5, HIGH);
  digitalWrite(11, HIGH);
  digitalWrite(10, HIGH);
  delay(300);
  digitalWrite(6, LOW);
  digitalWrite(5, LOW);
  digitalWrite(11, LOW);
  digitalWrite(10, LOW);
  delay(300);  
  }
  
  if(cond2 == LOW ) {  
  
  digitalWrite(6, LOW);
  digitalWrite(5, LOW);
  digitalWrite(11, LOW);
  digitalWrite(10, LOW);
  delay(100);
    
  }
   
}