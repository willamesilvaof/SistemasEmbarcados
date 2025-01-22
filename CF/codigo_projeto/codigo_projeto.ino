#include <Servo.h>
Servo meuServo;

void setup()
{
  Serial.begin(9600);
  meuServo.attach(9);
}

void loop()
{
  int val = analogRead(0);
  Serial.println(val);
  if (val > 700){
    
  for (int angulo = 0; angulo <= 180; angulo += 10){
    meuServo.write(angulo);
    delay(15);
  }
  for (int angulo = 180; angulo >= 0; angulo -= 10){
    meuServo.write(angulo);
    delay(15);
  }
  }

}