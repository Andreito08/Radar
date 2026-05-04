# 📡 Arduino Radar

> Un piccolo radar funzionante realizzato con Arduino, un sensore ad ultrasuoni e un servomotore — progetto scolastico.

***

## 🎯 Descrizione

Questo progetto simula il funzionamento di un radar: un sensore **HC-SR04** montato su un **servomotore SG90** ruota di 180° rilevando ostacoli. I dati vengono inviati via seriale e visualizzati in tempo reale su Processing.

***

## 🛠️ Componenti

| Componente | Quantità |
|---|---|
| Arduino Uno | 1 |
| Sensore ultrasuoni HC-SR04 | 1 |
| Servomotore SG90 | 1 |
| Jumper wire | q.b. |
| Breadboard | 1 |

***

## 🔌 Schema di collegamento

```
HC-SR04        Arduino
-------        -------
VCC    ──────  5V
GND    ──────  GND
Trig   ──────  Pin 10
Echo   ──────  Pin 11

SG90           Arduino
----           -------
Segnale ─────  Pin 6
VCC     ─────  5V
GND     ─────  GND
```

***

## 💻 Installazione

**Requisiti:**
- [Arduino IDE](https://www.arduino.cc/en/software)
- Libreria `Servo.h` *(già inclusa nell'IDE)*
- [Processing 4](https://processing.org/) *(per la visualizzazione)*

**Passi:**

1. Clona la repository
   ```bash
   git clone https://github.com/tuo-username/arduino-radar.git
   ```
2. Apri `radar.ino` con Arduino IDE
3. Carica lo sketch sulla board
4. Apri `radar_display.pde` con Processing ed eseguilo

***

## 📂 Struttura del progetto

```
arduino-radar/
├── radar.ino            # Sketch Arduino
├── radar_display.pde    # Visualizzazione Processing
└── README.md
```

***

## ⚙️ Come funziona

1. Il servomotore ruota da **0° a 180°** e viceversa
2. A ogni angolo, l'HC-SR04 misura la distanza dall'ostacolo più vicino
3. I dati `(angolo, distanza)` vengono inviati sulla porta seriale
4. Processing li legge e disegna l'interfaccia grafica del radar in tempo reale

***

## 📸 Demo

> *(aggiungi qui una foto del circuito o un GIF della visualizzazione)*

***

## 📄 Licenza

Progetto scolastico — uso libero a scopo didattico.
