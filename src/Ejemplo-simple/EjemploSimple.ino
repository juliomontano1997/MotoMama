


void setup()
{
  pinMode(11, OUTPUT);   // sets the pin as output
  pinMode(12, OUTPUT);   // sets the pin as output
  pinMode(13, OUTPUT);   // sets the pin as output
  pinMode(8, OUTPUT);   // sets the pin as output
  pinMode(9, OUTPUT);   // sets the pin as output
  pinMode(10, OUTPUT);   // sets the pin as output
}





void loop()
{  
  delay(5000);
  girarDerecha();
  delay(5000); 
  girarIzquierda();
  delay(5000);
  adelante();
  delay(5000);
  atras();


  
}

void adelante()
{
  digitalWrite(12,HIGH);
  digitalWrite(8,LOW);  
  
  digitalWrite(13,LOW);
  digitalWrite(9,HIGH);
  
  analogWrite(11, 255);
  analogWrite(10, 255);
}


void atras()
{
  digitalWrite(12,LOW);
  digitalWrite(8,HIGH);  
  
  digitalWrite(13,HIGH);
  digitalWrite(9,LOW);
  
  analogWrite(11, 255);
  analogWrite(10, 255);
}

void girarIzquierda()
{
    digitalWrite(12,LOW);
  digitalWrite(8,LOW);  
  
  digitalWrite(13,HIGH);
  digitalWrite(9,HIGH);
  
  analogWrite(11, 175);
  analogWrite(10, 175);
}

void girarDerecha()
{
   digitalWrite(12,HIGH);
  digitalWrite(8,HIGH);  
  
  digitalWrite(13,LOW);
  digitalWrite(9,LOW);
  
  analogWrite(11, 175);
  analogWrite(10, 175);
}
