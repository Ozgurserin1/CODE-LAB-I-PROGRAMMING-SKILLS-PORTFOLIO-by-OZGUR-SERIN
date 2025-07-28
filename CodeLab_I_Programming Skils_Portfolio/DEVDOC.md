# Developer Documentation

## 📦 Project: C++ Programming Skills Portfolio

This document provides internal documentation and technical details to assist with maintaining and understanding the C++ exercises.

---

## 🛠️ Development Environment

- Language: C++
- Compiler: `g++`, C++17 standard
- Tools: Any standard text editor or IDE (e.g., VS Code, Code::Blocks, CLion)
- OS: Cross-platform (Windows, macOS, Linux)

---

## 🧱 Project Structure

Each `.cpp` file is a standalone exercise located in the project root. No external libraries are used.

```
CPP_Portfolio_Exercises/
├── 01-CodingIsCool.cpp
├── 02-SimpleSums.cpp
├── 03-Biography.cpp
├── 04-PrimitiveQuiz.cpp
├── 05-DaysOfTheMonth.cpp
├── 06-BruteForceAttack.cpp
├── 07-SomeCounting.cpp
├── 08-SimpleSearch.cpp
├── 09-Hello.cpp
├── 10-IsItEven.cpp
├── README.md
└── DEVDOC.md
```

---

## 🧠 Program Insights

### Input/Output

- Programs use `cin`, `getline`, and `cout` for console-based interaction.
- `03-Biography` and `04-PrimitiveQuiz` handle full-string inputs and validation.
- Error handling via loops and `cin.fail()` to ensure clean input (especially `03`, `10`).

### Control Flow

- Conditional logic (`if`, `switch`) used in exercises like `04`, `05`, `06`, `10`.
- Loop constructs (`for`, `while`) are demonstrated in exercises like `06`, `07`, `08`.

### Functions

- Basic modularization in exercises `09` and `10` using user-defined functions.

---

## ⚠️ Error Handling

- Input validation is included for all user-input-dependent programs.
- Type checking (`cin.fail()`) is used in `03-Biography` to handle non-integer age input.
- Maximum attempt handling in `06-BruteForceAttack` prevents infinite loops.

---

## 🔁 Reusability & Extensibility

- Each `.cpp` file can be modified independently.
- Can be expanded into multi-file projects using header files and classes.
- `04-PrimitiveQuiz` can be extended to a quiz game with a loop and question bank.

---

## 🧪 Testing Instructions

Compile and run each `.cpp` file using a C++17 compliant compiler:

```bash
g++ <filename>.cpp -o <output>
./<output>
```

Edge cases are tested for:
- String input when integer expected (e.g., in `03`)
- Case-insensitive string comparisons (e.g., in `04`)
- Invalid month input (e.g., in `05`)
- Exceeding password attempts (e.g., in `06`)

---

## 👨‍🔧 Maintenance Notes

- Ensure all programs remain C++17 compatible.
- Keep consistent naming and coding conventions.
- Regular commits with descriptive messages are advised during extension or debugging.

---

## 🧾 Version

**Initial Release:** July 2025  
**Developer:** Ozgur Serin  
**Module:** CodeLab 1 - Programming Skills Portfolio

