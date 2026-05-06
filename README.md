#  Arduino Radar Project

> Un piccolo progetto scolastico che trasforma **Arduino Uno** in un mini radar con sensore a ultrasuoni, servomotore, LED e display LCD.

<p align="center">
  Un progetto semplice, ma capace di unire elettronica, programmazione e automazione in un unico sistema.
</p>

***

##  Panoramica

Questo progetto realizza un **radar elettronico** in miniatura.
Il sensore a ultrasuoni rileva la presenza di ostacoli, il servomotore sposta il sensore per scandire l'area, mentre Arduino elabora i dati e li mostra sul display LCD.

È un lavoro pensato per la scuola.

***

##  Obiettivo del progetto

L'obiettivo è simulare il comportamento di un radar reale in modo semplice e didattico, utilizzando componenti base di Arduino.

Il sistema permette di:
- rilevare ostacoli a distanza;
- mostrare informazioni sul display;
- segnalare lo stato tramite LED;
- comprendere meglio il funzionamento di sensori, attuatori e circuiti elettronici.

***

##  Componenti utilizzati

| Componente | Quantità |
|---|---:|
| Arduino Uno | 1 |
| Sensore HC-SR04 | 1 |
| Servomotore SG90 | 1 |
| Display LCD 16x2 | 1 |
| Potenziometro 10k | 1 |
| LED rossi | 4 |
| Resistenze da 180Ω | 5 |
| Breadboard | 1 |
| Jumper wire | q.b. |

***

##  Funzionamento

Il progetto segue una logica molto semplice:

1. Il **servomotore** ruota il sensore in diverse direzioni.
2. Il sensore **HC-SR04** misura la distanza degli oggetti presenti davanti a sé.
3. Arduino elabora i valori letti.
4. Il **display LCD 16x2** mostra le informazioni utili.
5. I **LED** forniscono una segnalazione visiva.

In questo modo si ottiene un piccolo sistema di rilevamento capace di unire movimento, misura e visualizzazione dei dati.

***

##  Struttura del circuito

Il circuito è composto da più sezioni collegate tra loro:

- **Sezione sensore**, dedicata alla misurazione della distanza.
- **Sezione movimento**, con servomotore per l'orientamento del radar.
- **Sezione output**, con LCD e LED per visualizzare i risultati.
- **Sezione controllo**, gestita interamente da Arduino Uno.

Questa organizzazione rende il progetto ordinato, leggibile e facile da spiegare anche in una presentazione scolastica.

***

##  Struttura della repository

```bash
Radar/
├── LICENSE
├── README.md
└── radar.ino
```

> `radar.ino` contiene il codice principale del progetto.

***

##  Anteprima

Il progetto include il montaggio del circuito su breadboard e lo schema elettrico della simulazione.

### Foto del risultato

<img width="1306" height="816" alt="Circuito su breadboard" src="https://github.com/user-attachments/assets/ef6c6cec-2283-45e0-a87f-b4ef8eb4dd5d" />

### Schema elettrico

<img width="1460" height="1134" alt="Schema elettrico della simulazione" src="https://github.com/user-attachments/assets/8650d35c-423a-453f-9834-fa96ae76d599" />

### I Led in azione

<img width="1080" height="1080" alt="animate-this-breadboard-so-only-the-four-red-led-r (1)" src="https://github.com/user-attachments/assets/7917fe22-b0ae-46c2-95cc-4f559326c118" />

***

##  Finalità didattica

Questo lavoro è stato realizzato come progetto scolastico per applicare in pratica concetti di:

- elettronica di base;
- programmazione con Arduino;
- utilizzo dei sensori;
- controllo di attuatori;
- gestione di output visivi.

***

##  Perché questo progetto è interessante

Anche se è un progetto piccolo, mostra bene come pochi componenti possano lavorare insieme per creare un sistema completo.

È un ottimo esempio di progetto scolastico perché è:
- semplice da capire;
- visivamente efficace;
- facile da dimostrare;
- utile per collegare teoria e pratica.

***

##  Licenza

Progetto realizzato a scopo didattico, con licenza MIT.
