#include <Servo.h>
int led=13;
int led2=12;
int servopin = 9;
int servoposition = 180;
Servo myservo;
void setup(){
  Serial.begin(9600);
  myservo.attach(servopin);
  pinMode(led, OUTPUT);
  pinMode(led2, OUTPUT);
  }
  void loop(){
    digitalWrite(led, HIGH);
    digitalWrite(led2, HIGH);
   myservo.detach();
    delay(2000);
    myservo.attach(servopin);
    myservo.write(servoposition);
    delay(2000);
    myservo.detach();
    
    myservo.attach(servopin);
    myservo.write(0);
    delay(2000);
  }
