
// Include the servo library:
#include <Servo.h>
// Include the button library:

// Create a new servo object:
Servo TURN;
// Define the servo pin:
// AKA Where you plugged the servo into on your UNO
#define servoPin 9
// Create a variable to store the current servo position:
int angle = 0;
void setup() {
  // Attach the Servo variable to a pin:
  TURN.attach(servoPin);
}
void loop() {
  // Tell the servo to go to a particular angle:
  TURN.write(90);
  delay(1000);
  TURN.write(90);
  delay(1000);
  TURN.write(0);
  delay(1000);
  // Sweep from 0 to 90 to 90 degrees:
  for (angle = 0; angle <= 180; angle += 1) {
    TURN.write(angle);
    delay(15);
  }
  // And back from 180 to 0 degrees:
  for (angle = 180; angle >= 0; angle -= 1) {
    TURN.write(angle);
    delay(30);
  }
  delay(1000);
}
