# 🔐 IoT Based Theft Detection System

An **IoT-based security system** that detects unauthorized motion using a PIR sensor and alerts the user through an alarm and internet connectivity.
This project uses **NodeMCU (ESP8266)** to monitor motion and trigger a buzzer when an intruder is detected.

---

## 📌 Features

* Motion detection using **PIR Sensor**
* Real-time alert using **buzzer alarm**
* WiFi-enabled monitoring using **ESP8266**
* Low-cost and easy-to-build system
* Suitable for **home, office, and shop security**

---

## 🛠 Hardware Components

| Component                | Quantity |
| ------------------------ | -------- |
| NodeMCU (ESP8266)        | 1        |
| PIR Motion Sensor        | 1        |
| Buzzer                   | 1        |
| Breadboard               | 1        |
| Jumper Wires             | Several  |
| USB Cable / Power Supply | 1        |

---

## ⚙️ Working Principle

1. The **PIR sensor** continuously monitors motion in the environment.
2. When motion is detected, it sends a signal to the **NodeMCU microcontroller**.
3. The microcontroller processes the signal.
4. The **buzzer alarm activates** to alert nearby people.
5. The system can be expanded to send **mobile notifications using IoT platforms**.

---

## 🔌 Circuit Connection

| Component | NodeMCU Pin |
| --------- | ----------- |
| PIR OUT   | D5          |
| Buzzer    | D6          |
| PIR VCC   | 3.3V        |
| PIR GND   | GND         |

---

## 💻 Code Example

```cpp
#include <ESP8266WiFi.h>

int pir = D5;
int buzzer = D6;

void setup(){
  pinMode(pir, INPUT);
  pinMode(buzzer, OUTPUT);
}

void loop(){
  int motion = digitalRead(pir);

  if(motion == HIGH){
    digitalWrite(buzzer, HIGH);
  } 
  else{
    digitalWrite(buzzer, LOW);
  }
}
```

---

## 📂 Project Structure

```
IoT-Theft-Detection-System
│
├── code
│   └── theft_detection.ino
│
├── circuit-diagram
│   └── circuit.png
│
├── report
│   └── project_report.pdf
│
├── images
│   └── prototype.jpg
│
└── README.md
```

---

## 🚀 Applications

* Home security systems
* Office security
* Warehouse monitoring
* Smart city surveillance

---

## 📈 Future Improvements

* Mobile notification using **Blynk / Telegram**
* Integration with **cloud platforms**
* Add **camera module for image capture**
* Real-time monitoring dashboard

---

## 👨‍💻 Author

**Debjit Hazra**

---

## 📜 License

This project is licensed under the **MIT License**.
