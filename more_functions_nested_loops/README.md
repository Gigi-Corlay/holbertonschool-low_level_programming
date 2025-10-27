C - Functions, nested loops
Resources 📚

Read or watch:

Nested while loops

C - Functions

Learning to Program in C (Part 06)
 (stop at 14:00)

What is the purpose of a function prototype?

C - Header Files
 (stop before “Once-Only Headers”)

Learning Objectives 🎯

By the end of this project, you should be able to explain to anyone, without the help of Google:

General

What are nested loops and how to use them

What is a function and how to use functions

What is the difference between a declaration and a definition of a function

What is a prototype

What is the scope of variables

What are the gcc flags -Wall -Werror -Wextra -pedantic -std=gnu89

What are header files and how to use them with #include

Requirements ⚙️
General

Allowed editors: vi, vim, emacs

All your files will be compiled on Ubuntu 20.04 LTS using:

gcc -Wall -Werror -Wextra -pedantic -std=gnu89


All your files should end with a new line

A README.md file at the root of the project folder is mandatory

Your code should follow the Betty style (betty-style.pl and betty-doc.pl)

You are not allowed to use global variables

You are not allowed to use the standard library (printf, puts, etc.)

You may use only _putchar

You don’t need to push _putchar.c (we will use our own version)

You can use example main.c files to test your code, but don’t push them

The prototypes of all your functions and of _putchar must be included in your header file called main.h

Don’t forget to push your header file

Files 📁
File	Description
main.h	Header file containing all function prototypes
_putchar.c	Function that prints a character to stdout (provided)
0-...c	Each task source file
README.md	Project description file
Compilation 💻

To compile your code:

gcc -Wall -Werror -Wextra -pedantic -std=gnu89 <file>.c -o <output>


Example:

gcc -Wall -Werror -Wextra -pedantic -std=gnu89 0-putchar.c _putchar.c -o 0-putchar
./0-putchar

Example Output 🖥️

(depends on the task, e.g. 0-putchar)

_putchar
