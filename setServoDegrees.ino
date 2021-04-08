// 測試 GitHub
#include <Servo.h>

int servoPin = 15; // D8
Servo myservo;     // create servo object to control a servo

void setup()
{
    myservo.attach(servoPin); // attaches the servo on D8 to the servo object
}

void loop()
{
    myservo.write(90);
}
