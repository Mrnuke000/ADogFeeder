#include <Servo.h>  //tells the computer that im using a servo
#define ACTIVATED LOW  // tells the computer that the button is pressed down when the power is low voltage
Servo servo1; //setting the name for the the servo
int servoPin = 9; //defining what pin the servo is plugged into on the arduino UNO
const int buttonPin = 2;  //defining what pin the button is plugged into 
int buttonState = 0; //saying that the button is set to 0 normally
void setup(){

  pinMode(buttonPin, INPUT);
  digitalWrite(buttonPin,HIGH);
  servo1.attach(servoPin);
}
/*
void loop(){
  servo1.write(0);
  delay(1000);
  servo1.write(90);
  delay(1500);
  servo1.write(180);
  delay(1000);

}
*/
void loop(){
buttonState = digitalRead(buttonPin);
  if(buttonState == ACTIVATED){
   
      servo1.write(0);
  delay(1000);   
  servo1.write(90);
  delay(1500);
  servo1.write(180);  
  delay(1000);
   }
   
  else {
    
  }
     }
        // the thing above is telling the computer to keep checking over and over again to see if the button is pressed, if it is then itll run the code (in this case making the servo despense food)

