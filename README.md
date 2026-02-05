# Settlement System (C++)

A clean and modular C++ implementation of a settlement management system demonstrating core object-oriented design principles, resource management, building construction, and time-based production — all without relying on any game engine.

---

## 📌 Overview

This project simulates a settlement system where:

- Resources (wood, stone, gold, food, weaponry) are managed  
- Buildings can be constructed if enough resources are available  
- Built structures produce resources over time  
- Major and minor settlements behave differently  

It is implemented in **standard C++**, making it ideal for learning OOP, simulation logic, and game system foundations.

---

## 🛠️ Features

✔ Pure C++, no game engine  
✔ Object-oriented design (classes, inheritance, interfaces)  
✔ Resource tracking and consumption  
✔ Building construction and production logic  
✔ UI notification system via interface (console-based)  
✔ Easy to extend and customize  

---

## 📦 File Structure

Settlement-System-CPP/
├── main.cpp  
├── Resource.h  
├── Notification.h  
├── ResourceManager.h  
├── Building.h  
├── Buildings.h  
├── Settlement.h  
├── MajorSettlement.h  
├── MinorSettlement.h  
├── README.md  

---

## 🚀 Getting Started

### Requirements

- C++ compiler (g++, MinGW, or MSVC)
- VS Code or any C++ compatible IDE

### Build & Run

```bash
g++ main.cpp -o SettlementSystem
SettlementSystem
```

---

## 🧠 Design Overview

- `ResourceManager` handles resource storage and updates  
- `Building` is a base class for all constructible buildings  
- Buildings define construction cost and production interval  
- `MajorSettlement` supports building construction  
- `MinorSettlement` produces resources automatically  
- `INotificationListener` decouples UI from core logic  

---

## 🎯 Purpose

This project was created as a **take-home / interview-style assignment** to demonstrate:

- Clean C++ design
- OOP fundamentals
- System-level thinking used in game development

---

## 👤 Author

**Durkesh Kumar S**  
Game Developer | C++ | Unreal Engine | Unity
