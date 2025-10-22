# 🔁 C - Functions, nested loops

## 📚 Description
This project is part of the **Holberton School** low-level programming curriculum.  
It focuses on learning how to create and use **functions**, understand **function prototypes**, and apply **nested loops** in C programs.

---

## 🎯 Learning Objectives
By the end of this project, you should be able to explain to anyone, without Google:
- 🔄 What are **nested loops** and how to use them  
- ⚙️ What is a **function** and how to use it  
- 📄 The difference between a **declaration** and a **definition** of a function  
- 🧩 What is a **prototype**  
- 🌍 **Scope** of variables  
- 🧱 Meaning of the `gcc` flags: `-Wall -Werror -pedantic -Wextra -std=gnu89`  
- 🧠 What are **header files** and how to use them with `#include`

---

## ⚙️ Requirements
- 🖊️ Allowed editors: `vi`, `vim`, `emacs`
- 💻 Compiled on **Ubuntu 20.04 LTS** using:
gcc -Wall -Werror -Wextra -pedantic -std=gnu89

markdown
Copier le code
- 📏 Code must follow the **Betty style**
- 🚫 No global variables  
- 🧮 No more than **5 functions per file**  
- 📚 No standard library functions unless specified  
- 🖨️ You are allowed to use `_putchar`  
- 🧾 All function prototypes (including `_putchar`) must be in `main.h`

---

## 📁 Files
| File | Description |
|------|--------------|
| `0-putchar.c` | 🅿️ Prints `_putchar`, followed by a new line |
| `1-alphabet.c` | 🔤 Prints the lowercase alphabet |
| `2-print_alphabet_x10.c` | 🔁 Prints 10 times the alphabet |
| `3-islower.c` | 🔡 Checks for lowercase character |
| `4-isalpha.c` | 🔠 Checks for alphabetic character |
| `5-sign.c` | ➕ Prints the sign of a number |
| `6-abs.c` | 🔢 Computes the absolute value of an integer |
| `7-print_last_digit.c` | 🔟 Prints the last digit of a number |
| `8-24_hours.c` | 🕒 Prints every minute of the day |
| `9-times_table.c` | ✖️ Prints the 9 times table |
| `10-add.c` | ➕ Adds two integers |
| `11-print_to_98.c` | 🔢 Prints all natural numbers from `n` to `98` |
| `main.h` | 🧩 Header file containing function prototypes |

---

## 🧰 Compilation
To compile a file:
```bash
gcc -Wall -Werror -Wextra -pedantic -std=gnu89 <file.c> _putchar.c -o <output_name>
Example:

bash
Copier le code
gcc -Wall -Werror -Wextra -pedantic -std=gnu89 0-putchar.c _putchar.c -o 0-putchar
./0-putchar
🧾 Example Output
ruby
Copier le code
$ ./0-putchar
_putchar
$ ./1-alphabet
abcdefghijklmnopqrstuvwxyz
$ ./2-print_alphabet_x10
abcdefghijklmnopqrstuvwxyz
abcdefghijklmnopqrstuvwxyz
...
👨‍💻 Author
Written by [Your Name] ✍️
Holberton School 🏫