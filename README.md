# 📡 Arduino Radar

Piccolo progetto scolastico realizzato con **Arduino Uno** che simula un radar usando un sensore a ultrasuoni, un servomotore, un display LCD e alcuni LED.

---

## 🎯 Obiettivo

Il progetto rileva la distanza degli ostacoli tramite il sensore **HC-SR04**.  
Il servomotore sposta il sensore per coprire più direzioni, mentre Arduino elabora i dati e li mostra sul display LCD.

---

## 🛠️ Componenti usati

- Arduino Uno
- Sensore ultrasuoni HC-SR04
- Servomotore SG90
- Display LCD 16x2
- Potenziometro da 10k
- LED
- Resistenze
- Breadboard e cavetti jumper

---

## ⚙️ Come funziona

1. Il servomotore ruota il sensore.
2. Il sensore misura la distanza dagli oggetti davanti a sé.
3. Arduino elabora i valori letti.
4. Il display LCD mostra le informazioni utili.
5. I LED possono segnalare la presenza di ostacoli o lo stato del sistema.

---

## 🔌 Collegamenti

Il circuito comprende:

- HC-SR04 collegato ad Arduino per inviare e ricevere l’impulso ultrasonico
- Servomotore collegato a un pin digitale PWM
- LCD 16x2 collegato ai pin digitali di Arduino
- Potenziometro usato per regolare il contrasto del display
- LED con resistenze per la segnalazione visiva

---

## 💻 Software

Per questo progetto serve principalmente:

- **Arduino IDE** per scrivere e caricare il codice sulla scheda

### Opzionale
- **Processing 4**, solo se si vuole creare una visualizzazione grafica del radar sul computer tramite comunicazione seriale

---

## 📷 Anteprima progetto

Schema elettrico e montaggio realizzati per la simulazione del progetto.

---

## 📚 Scopo didattico

Questo progetto è stato realizzato per scuola con l’obiettivo di unire elettronica, programmazione e uso dei sensori in un’applicazione pratica e semplice.

---

## 📄 Licenza

Progetto a scopo didattico.
