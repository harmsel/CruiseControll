
#include <Servo.h>

Servo myservo;  // create Servo object to control a servo
// twelve Servo objects can be created on most boards

int servoHoek = 0;  // variable to store the servo position

void setup() {
  myservo.attach(2);                        // attaches the servo on pin 9 to the Servo object
  servoHoek = constrain(servoHoek, 0, 160);  //beperk de servo in zijn beweging
}

void loop() {

  for (int x = 0; x < 100; x++) {
    for (servoHoek = 0; servoHoek <= 160; servoHoek += 1) {  // goes from 0 degrees to 180 degrees
      // in steps of 1 degree
      myservo.write(servoHoek);  // tell servo to go to position in variable 'pos'
      delay(15);                 // waits 15 ms for the servo to reach the position
    }
    delay(5000);
    for (servoHoek = 160; servoHoek >= 0; servoHoek -= 1) {  // goes from 180 degrees to 0 degrees
      myservo.write(servoHoek);                             // tell servo to go to position in variable 'pos'
      delay(15);                                            // waits 15 ms for the servo to reach the position
    }
        delay(5000);
  }
}
