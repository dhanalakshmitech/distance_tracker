# 🛠️ STM32 Ultrasonic Distance Tracker with LED Indicators

A simple embedded project using STM32 and the HC-SR04 ultrasonic sensor to detect the distance of nearby objects and indicate proximity using 4 LEDs. Built with STM32CubeMX and STM32CubeIDE using HAL libraries.

---

## 📦 Features

- Distance measurement using HC-SR04 ultrasonic sensor
- Visual LED indication based on object proximity:
  - 🔴 **All LEDs ON** → Very Close (≤ 2 cm)
  - 🔴 3 LEDs ON → Close (≤ 4 cm)
  - 🟡 2 LEDs ON → Mid-range (≤ 7 cm)
  - 🟢 1 LED ON → Far (≤ 13 cm)
  - ⚫ All OFF → Out of range (> 13 cm)

---

## 🔧 Hardware Used

- STM32F103C8T6 (Blue Pill)
- HC-SR04 Ultrasonic Sensor
- 4 LEDs + 220Ω resistors
- Breadboard and jumper wires
- 5V Power Supply

---

## ⚙️ Pin Configuration

| Component        | STM32 Pin | Function          |
|------------------|-----------|-------------------|
| HC-SR04 Trigger  | PA1       | GPIO Output       |
| HC-SR04 Echo     | PA2       | Timer Input (TIM2_CH3) |
| LED1 (Closest)   | PA0       | GPIO Output       |
| LED2             | PA4       | GPIO Output       |
| LED3             | PA7       | GPIO Output       |
| LED4 (Farthest)  | PA12      | GPIO Output       |

---

## 🚀 How It Works

1. STM32 triggers the HC-SR04 with a 10µs HIGH pulse.
2. It uses **Timer Input Capture** to measure the duration of the echo pulse.
3. Distance is calculated using the formula:


4. Based on the measured distance, the number of active LEDs changes.

---

## 🧪 Distance → LED Mapping

| Distance Range | LED Pattern          |
|----------------|----------------------|
| ≤ 2 cm         | 🔴🔴🔴🔴 (All ON)      |
| ≤ 4 cm         | 🔴🔴🔴⚫              |
| ≤ 7 cm         | 🔴🔴⚫⚫              |
| ≤ 13 cm        | 🔴⚫⚫⚫              |
| > 13 cm        | ⚫⚫⚫⚫ (All OFF)      |

---

## 🛠️ Development Tools

- STM32CubeMX (Pin configuration & code generation)
- STM32CubeIDE (HAL-based firmware development)
- C language with STM32 HAL library

---

## 📁 Project Structure


---

## 🧰 How to Build & Flash

1. Open the `.ioc` file in STM32CubeMX (optional).
2. Open the project in STM32CubeIDE.
3. Connect your STM32 board via ST-Link.
4. Build and flash the firmware.

---

## 📸 Demo (Optional GIF/Video)
> Add a video/gif/image showing the LED response based on hand distance.

---

## 📝 License

This project is open-source under the MIT License. Feel free to fork and modify it.

---

## 🤝 Contributing

Pull requests are welcome. For major changes, please open an issue first to discuss what you would like to change.


