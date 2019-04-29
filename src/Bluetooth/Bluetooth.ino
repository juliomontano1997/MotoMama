#include <SoftwareSerial.h>

SoftwareSerial puertoBt(2,3);



void setup()
{  
  puertoBt.begin(9600); 
  Serial.begin(9600);  
  pinMode(11, OUTPUT);   // sets the pin as output
  pinMode(12, OUTPUT);   // sets the pin as output
  pinMode(13, OUTPUT);   // sets the pin as output
  pinMode(8, OUTPUT);   // sets the pin as output
  pinMode(9, OUTPUT);   // sets the pin as output
  pinMode(10, OUTPUT);   // sets the pin as output
}

void loop()
{ 
  if(puertoBt.available())
  {
    char comando;      
    comando = puertoBt.read(); 
  
    Serial.write(comando); 
    if(comando=='F')
    {
      adelante();    
    
    }
  
    else if(comando=='B')
    {
      atras(); 
 
    }
  
    else if(comando=='L')
    {
      girarIzquierda();

    }
  
    else if(comando=='R')
    {
      girarDerecha();   
  
    } 
  
    else
    {
      analogWrite(11, 0);
      analogWrite(10, 0);
    }    
  }
 
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
  
  analogWrite(11, 255);
  analogWrite(10, 255);
}

void girarDerecha()
{
   digitalWrite(12,HIGH);
  digitalWrite(8,HIGH);  
  
  digitalWrite(13,LOW);
  digitalWrite(9,LOW);
  
  analogWrite(11, 255);
  analogWrite(10, 255);
}
