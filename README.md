# Security-of-Cyberphysical-Systems

Nathan Miguens, Maxime Latgé, Léo Hardy

Teensy 3.6, ESP 32 M5StackC Atom Matrix

(le cable usb connecté au teensy a un faux contact)



## TO DO

sécuriser l'envoi du message (mdp, cryptage)

alimentation du ESP 32 ?

checker carte SD du teensy + le parametrer en tant que clef usb

Faire un coque 3D

Plusieurs boutons pour plusieurs attaques

Lien clavier à distance


## MASTER / SLAVE

lien : https://www.arduino.cc/en/Tutorial/LibraryExamples/MasterWriter

dossier Slave : code Arduino afin que le teensy recoive les infos de l'ESP

dossier Master_Writer : code à mettre sur l'ESP pour qu'il communique avec le slave

## CODE "MALVEILLANT"

dossier Teensy

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
