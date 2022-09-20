#include<Servo.h>
Servo s;
int sensor=12, motor=4, sonic=6, light=7, buzz=8;
int dist = 0;

long objectDistance(int a, int b)
{
  pinMode(a, OUTPUT);  
  digitalWrite(a, LOW);
  delayMicroseconds(2);
  digitalWrite(a, HIGH);
  delayMicroseconds(10);
  digitalWrite(a, LOW);
  
  pinMode(b, INPUT);
 
  return pulseIn(b, HIGH);
}

void setup()
{
  Serial.begin(9600);
  pinMode(sensor, INPUT);
  pinMode(light, OUTPUT);
  pinMode(buzz, OUTPUT);
  s.attach(motor);
  s.write(0);
}

void loop()
{
  digitalWrite(light, LOW);
  dist = 0.01723 * objectDistance(sonic, sonic);
  Serial.print("Distance is ");
  Serial.print(dist);
  Serial.println("cm");
  if(dist < 100)
  {
    digitalWrite(light, HIGH);
    if(digitalRead(sensor))
    {
      tone(buzz, 50);
      delay(700);
      noTone(buzz);
      s.write(90);
      delay(1000);
    }
  }
  delay(100); 
}

