# Security-of-Cyberphysical-Systems

Nathan Miguens, Maxime Latgé, Léo Hardy

Matériel : Teensy 3.6, ESP 32 M5StackC Atom Matrix


Le projet comporte un teensyduino sur lequel est chargé un code "malveillant", et un ESP32 qui active cette attaque quand l'attaquant le souhaite.
Ces 2 composants communiquent en i2C. (https://www.arduino.cc/en/Tutorial/LibraryExamples/MasterWriter)

![schéma](https://github.com/NthnMgns/Security-of-Cyberphysical-Systems/blob/master/sch%C3%A9ma.jpg)


## Teensy

Fichier arduino dans le dossier Teensy.
Le Teensy est en mode I2C Slave Receiver.
C'est le Teensy qui contient la ou les charge(s).
Il attend un message du M5 stack pour déclencher une charge.
Il est considéré par l'ordinateur comme un clavier.


## M5 Stack (ESP32)

Fichier arduino dans le dossier M5_Stack_Final_Code.
Le M5 Stack est en mode I2C Master Writer.
Il émet également un signal wifi auquel on peut se connecter avec un terminal afin d'accéder à un serveur web sur lequel on peut lancer les  différentes charges disponibles. (Pour l'instant la seule charge disponible est l'ouverture d'un GIF de Griezmann mais à terme on peut facilement rajouter d'autres charges.)
La connexion peut être sécurisé en utilisant un cryptage AES, un système d'identification et un protocole HTTPS. 


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
