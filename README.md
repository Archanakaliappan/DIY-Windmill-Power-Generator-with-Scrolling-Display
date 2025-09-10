# DIY-Windmill-Power-Generator-with-Scrolling-Display

## 📖 Project Overview
This project is a **DIY model of a windmill** designed to generate electricity using a gear motor and power a **scrolling LED display**.  
The setup demonstrates how renewable wind energy can be harnessed, regulated, and stored to run small electronic devices.

---

## ⚡ Components Used
- Gear Motor (acts as the generator)  
- 1N4007 Diode × 1 (prevents reverse current flow)  
- Electrolytic Capacitors 35V × 2 (parallel connection for voltage stabilization)  
- LM7805 Voltage Regulator × 1 (provides stable 5V output)  
- Filter Capacitor 25V × 1 (smoothens regulator output)  
- 2-Pin Sockets × 2 (for battery and external devices)  
- Rechargeable Batteries × 2 (used to power Arduino & scrolling display)  
- LED Indicator (shows energy generation/storage)  
- Scrolling Display (output device)  
- Wires, connectors, and base structure  

---

## ⚙️ Working Principle
1. **Wind Rotation → Gear Motor**  
   - The wind rotates the turbine blades connected to a **gear motor**.  
   - The motor converts mechanical energy into electrical energy.  

2. **Current Protection**  
   - Electricity passes through a **1N4007 diode** to block reverse current flow.  

3. **Voltage Stabilization**  
   - The generated voltage is stabilized using **2 electrolytic capacitors (35V)** connected in parallel.  

4. **Voltage Regulation**  
   - A single **LM7805 voltage regulator** maintains a constant **5V output** for safe charging.  
   - An additional **25V filter capacitor** smoothens the regulator output.  

5. **Energy Storage & Usage**  
   - Energy is stored in **two rechargeable batteries**.  
   - A **socket** connects the battery to power the Arduino-based scrolling display.  
   - An **LED indicator** lights up whenever energy is being generated and stored.  

6. **Final Output**  
   - The stored energy powers the **scrolling LED display**, completing the cycle of wind-to-electricity conversion.  

---

## 📷 Project Media
- Circuit diagram → *(upload in `CircuitDiagram/` folder)*  
- Photos of DIY windmill setup → *(upload in `Images/` folder)*  
- Arduino code → *(upload in `Code/` folder)*  

---

## 📌 How to Run
1. Place the windmill in an area with sufficient airflow.  
2. Ensure connections match the provided circuit diagram.  
3. Observe the LED indicator to confirm power generation.  
4. Check the scrolling display running on stored battery power.  

---

## 🙌 Acknowledgment
This is a student DIY project aimed at exploring **renewable energy applications** and demonstrating how wind energy can be converted into usable electrical power.  
