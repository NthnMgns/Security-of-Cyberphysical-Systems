const int ledPin = 13;   
void setup() {
  Serial.begin(9600);

  // Blink the LED for 10 seconds, to give time to open 
  // a word processor or text editor to receive the test
  pinMode(ledPin, OUTPUT);
  for (int i=0; i < 10; i++) {
    digitalWrite(ledPin, HIGH);
    delay(500);
    digitalWrite(ledPin, LOW);
    delay(500);
  }

  /*
  for (int i=0; i < 10; i++) {
    Keyboard.press(KEY_A);
    Keyboard.release(KEY_A);
    delay(1000);
  }
  */

  Keyboard.press(MODIFIERKEY_GUI);
  Keyboard.release(MODIFIERKEY_GUI);
  delay(1000);
  Keyboard.press(MODIFIERKEY_GUI);
  Keyboard.release(MODIFIERKEY_GUI);
  delay(1000);
  Keyboard.press(MODIFIERKEY_CTRL);
  Keyboard.press(MODIFIERKEY_ALT);
  Keyboard.press(KEY_T);
  Keyboard.release(KEY_T);
  Keyboard.release(MODIFIERKEY_ALT);
  Keyboard.release(MODIFIERKEY_CTRL);


}

void loop() {
  // Do nothing after the test
}

/*
 * 
 */
