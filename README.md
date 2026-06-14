# 💱 Currency Converter — C++ Console Application

A beginner-friendly **C++ console application** that converts **Pakistani Rupees (PKR)** into **18 international currencies** in real time, with session logging to a `.doc` file.

---

## 📌 Features

- 🌍 Convert PKR to **18 different world currencies**
- 📝 Automatically **logs each conversion** to `CURRENCY DATA.doc`
- 🔄 **Loop mode** — convert multiple amounts in a single session
- ✅ **Input validation** — rejects negative or zero amounts
- ❌ Type `-2` at any time to safely **exit the program**
- 🖥️ Clean, interactive **console UI** with visual separators

---

## 🌐 Supported Currencies

| Key | Currency | Symbol |
|-----|----------|--------|
| `d` | US Dollar (USD) | $ |
| `e` | Euro (EUR) | € |
| `r` | Saudi Riyal (SAR) | SAR |
| `k` | Danish Krone (DKK) | kr |
| `p` | British Pound (GBP) | £ |
| `t` | Turkish Lira (TRY) | ₺ |
| `c` | Canadian Dollar (CAD) | C$ |
| `n` | Norwegian Krone (NOK) | kr |
| `i` | Indian Rupee (INR) | ₹ |
| `u` | Australian Dollar (AUD) | A$ |
| `j` | Japanese Yen (JPY) | ¥ |
| `g` | Georgian Lari (GEL) | ლ |
| `f` | French Franc (FRF) | ₣ |
| `a` | Emirati Dirham (AED) | د.إ |
| `w` | Swedish Krona (SEK) | kr |
| `y` | Chinese Yuan Renminbi (CNY) | ¥ |
| `q` | Qatari Rial (QAR) | QR |
| `x` | Iraqi Dinar (IQD) | IQR |

---

## 🗂️ Project Structure

```
C++ project/
├── Currency converter.cpp   # Main program logic (UI, loop, switch-case)
├── currency.h               # User-defined conversion functions
├── CURRENCY DATA.doc        # Auto-generated log file (created on first run)
├── gCurrency converter.exe  # Pre-compiled Windows executable
├── gCurrency converter.ico  # Application icon
└── Project Video.mp4        # Demo video of the project
```

---

## 🚀 How to Run

### Option 1 — Run the Executable (Windows)
Simply double-click `gCurrency converter.exe` — no compiler needed!

### Option 2 — Compile from Source

Make sure you have **g++** (MinGW or GCC) installed.

```bash
g++ "Currency converter.cpp" -o currency_converter
./currency_converter
```

---

## 🧭 How to Use

1. **Launch** the program.
2. **Enter your name** to start.
3. **Enter the amount** in Pakistani Rupees (PKR) you wish to convert.
4. **Press a key** from the list of supported currencies (e.g., `d` for USD).
5. The **converted result** is displayed instantly.
6. **Repeat** as many times as you like.
7. **Type `-2`** as the amount to exit. Your session is saved to `CURRENCY DATA.doc`.

---

## 📋 Example Session

```
*************************************
        CURRENCY CONVERTER
*************************************
 Enter your name to start: Ali

 Welcome Ali! Kindly input the money you want to convert:
 Input the rupees you want to convert: 10000
 You entered 10000 Rs

 Input the Character from above to convert to your desired currency: d
 You pressed the d key!

 You have converted PKR (Pakistani Rupees) to USD (United States Dollar):
*************************************
 And the results are: 34.88 $

 Thank You Ali for using Currency Converter! ...
```

---

## 💾 Session Logging

Every successful conversion is **automatically saved** to `CURRENCY DATA.doc` in the same directory. Each entry records:

- Your name
- The amount entered (PKR)
- The currency you converted to
- The converted result

---

## 🛠️ Technologies Used

| Technology | Purpose |
|------------|---------|
| C++ | Core programming language |
| `<iostream>` | Console input/output |
| `<fstream>` | File-based session logging |
| `<iomanip>` | Formatted output (column alignment) |
| `<cmath>` | Mathematical operations |
| `<cstring>` | String handling |
| Custom `currency.h` | Conversion rate functions |

---

## ⚠️ Notes

- Exchange rates are **hardcoded** at the time of development. They may not reflect current market rates.
- The program is designed for **Windows** (`gCurrency converter.exe`).
- Input is case-insensitive — both `d` and `D` are accepted.

---

## 👨‍💻 Author

Built as a **C++ learning project**, demonstrating:
- Header files & modular code
- Switch-case logic
- File I/O with `fstream`
- Input validation with `while` loops
- Console formatting with `iomanip`

---

> *"Salam Pakistan! I am Currency Converter. I am here to help you!"* 🇵🇰
