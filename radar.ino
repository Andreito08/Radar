// Librerie
#include <Servo.h>
#include <LiquidCrystal.h>

// Pin sensore ultrasuoni
int pinTrig = 8;
int pinEcho = 9;
int pinServo = 10;

// Pin LED direzionali
int pinNO_O = 6;
int pinN_NO = 5;
int pinNE_N = 4;
int pinE_NE = 3;

// Pin display LCD
int rs = 12;
int en = 13;
int d4 = 11;
int d5 = 7;
int d6 = 2;
int d7 = 1;

// Oggetti principali
Servo myservo;
LiquidCrystal lcd(rs, en, d4, d5, d6, d7);

// Variabili globali
long durata;
float distanza;
int gradi;

// Soglie di distanza
int rangeVerde = 100;
int rangeRosso = 40;

//range angolare
int gradiOvest = 180;
int gradiNord_Ovest=135;
int gradiNord=90;
int gradiNord_Est=45;
int gradiEst=0;

// Misura la distanza in cm
int calcoloDistanza() {
  digitalWrite(pinTrig, LOW);
  delayMicroseconds(2);
  digitalWrite(pinTrig, HIGH);
  delayMicroseconds(10);
  digitalWrite(pinTrig, LOW);

  durata = pulseIn(pinEcho, HIGH);
  distanza = durata * 0.034 / 2;

  return distanza;
}

// Aggiorna il LED in base all'angolo
void accensioneLedPos() {
  if (gradi >= gradiEst && gradi < gradiNord_Est) {
    if (distanza < rangeVerde && distanza >= rangeRosso || distanza < rangeRosso) {
      digitalWrite(pinE_NE, HIGH);
    } else {
      digitalWrite(pinE_NE, LOW);
    }
  } else if (gradi >= gradiNord_Est && gradi < gradiNord) {
    if (distanza < rangeVerde && distanza >= rangeRosso || distanza < rangeRosso) {
      digitalWrite(pinNE_N, HIGH);
    } else {
      digitalWrite(pinNE_N, LOW);
    }
  } else if (gradi >= gradiNord && gradi < gradiNord_Ovest) {
    if (distanza < rangeVerde && distanza >= rangeRosso || distanza < rangeRosso) {
      digitalWrite(pinN_NO, HIGH);
    } else {
      digitalWrite(pinN_NO, LOW);
    }
  } else if (gradi >= gradiNord_Est && gradi < gradiOvest) {
    if (distanza < rangeVerde && distanza >= rangeRosso || distanza < rangeRosso) {
      digitalWrite(pinNO_O, HIGH);
    } else {
      digitalWrite(pinNO_O, LOW);
    }
  }
}

// Scrive la distanza sul display
void aggiornaLcd() {
  lcd.setCursor(0, 1);
  lcd.print("                ");
  lcd.setCursor(0, 1);
  lcd.print(distanza, 0);
  lcd.print("cm");

  lcd.setCursor(8, 1);
  if (distanza >= rangeVerde) {
    lcd.print("Verde");
  } else if (distanza >= rangeRosso) {
    lcd.print("Giallo");
  } else {
    lcd.print("Rosso");
  }
}

// Inizializzazione
void setup() {
  pinMode(pinNO_O, OUTPUT);
  pinMode(pinN_NO, OUTPUT);
  pinMode(pinNE_N, OUTPUT);
  pinMode(pinE_NE, OUTPUT);

  pinMode(pinTrig, OUTPUT);
  pinMode(pinEcho, INPUT);

  lcd.begin(16, 2);
  lcd.setCursor(0, 0);
  lcd.print("Distanza:");

  myservo.attach(pinServo);
  myservo.write(0);
  delay(2000);
}

// Ciclo principale
void loop() {
  for (gradi = 0; gradi <= 180; gradi++) {
    myservo.write(gradi);
    calcoloDistanza();
	accensioneLedPos();
	aggiornaLcd();
	delay(100);
  }

  for (gradi = 180; gradi >= 0; gradi--) {
    myservo.write(gradi);
    calcoloDistanza();
	accensioneLedPos();
	aggiornaLcd();
	delay(100);
  }
}
