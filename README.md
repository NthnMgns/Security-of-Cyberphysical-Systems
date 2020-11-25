# Security-of-Cyberphysical-Systems

Nathan Miguens, Maxime Latgé, Léo Hardy

Matériel : Teensy 3.6, ESP 32 M5StackC Atom Matrix


Le projet comporte un teensyduino sur lequel est chargé un code "malveillant", et un ESP32 qui active cette attaque quand l'attaquant le souhaite.
Ces 2 composants communiquent en i2C.

![schéma](https://github.com/NthnMgns/Security-of-Cyberphysical-Systems/blob/master/sch%C3%A9ma.jpg)


## CODE "MALVEILLANT"

dossier Teensy

Utilise un master/writer pour que l'ESP et le Teensyduino communiquent (lien : https://www.arduino.cc/en/Tutorial/LibraryExamples/MasterWriter)


## PORTS ET CONNECTIQUE

ESP 32:
Pin SDA : 21,
pin SCL : 25,
A definir avec Wire.begin(21,25)

Teensy :
Pin SDA : 18,
Pin SCL : 19,
brancher le 3.3V sur ESP32

(
Led : fil rouge = signal ; fil orange = 3V ; fil marron = ground
Teensy : Signal sur pin 13
)

(
Arduino Uno :
Pin SDA : A4
Pin SCL : A5
)
