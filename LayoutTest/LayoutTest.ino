#include <Wire.h>



const int ledPin = 13;   
void setup() {
  /* slave */
  Wire.begin(4);                // join i2c bus with address #4
  Wire.onReceive(receiveEvent); // register event
  
  Serial.begin(9600);

}

void loop() {
  // Do nothing after the test
}

/* slave : on REceive event */
void receiveEvent(int message)
{
  
  int x = Wire.read();    // receive byte as an integer
  Serial.println(x);
  
  /* attack
  Blink the LED for 10 seconds, to give time to open 
  a word processor or text editor to receive the test*/
  pinMode(ledPin, OUTPUT);
  for (int i=0; i < 5; i++) {
    digitalWrite(ledPin, HIGH);
    delay(500);
    digitalWrite(ledPin, LOW);
    delay(500);
  }
  
  Keyboard.press(MODIFIERKEY_GUI);
  Keyboard.press(KEY_R);
  Keyboard.release(KEY_R);
  Keyboard.release(MODIFIERKEY_GUI);
  delay(200);
  Keyboard.press(KEY_ENTER);
  Keyboard.release(KEY_ENTER);
  delay(200);
  Keyboard.print("start chrome.exe https://static.hitek.fr/img/up_m/721767544/griezmann.gif");
  Keyboard.press(KEY_ENTER);
  Keyboard.release(KEY_ENTER);
}
/*
 * 
 */
