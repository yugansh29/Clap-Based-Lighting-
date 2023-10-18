#include<ESP8266WiFi.h>
#include<ESP8266HTTPClient.h>

int  ledPin=D4;
int sensorPin=D0;
double val ;


void setup()
{
  pinMode(ledPin, OUTPUT);
  pinMode(sensorPin, INPUT);
  Serial.begin (9600);
 
}
  
void pr(){
 val =digitalRead(sensorPin);
  Serial.println (val);
  Serial.println (clap);
  delay(500);
}

void loop ()
{
  // when the sensor detects a signal above the threshold value, LED flashes
  if (val>=1) 
  {
    clap++;
    if(clap==2)
    {
      digitalWrite(ledPin,HIGH);

    }
    else if(clap==5)
    {
     
      digitalWrite(ledPin,LOW);

    }
    else if(clap>4)
    {
      clap=0;
    }
  }
    delay(50);
}
  
  
