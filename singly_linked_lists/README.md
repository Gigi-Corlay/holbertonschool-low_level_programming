## Singly Linked Lists

This README provides a clear and structured overview of the **Singly Linked Lists** project, commonly found in Holberton/ALX curriculum. It explains the core concepts, project files, and how to compile and test the code.


## 📌 Introduction
A **singly linked list** is a data structure composed of nodes linked together. Each node contains:
- A **value** (data)
- A **pointer to the next node**


Unlike arrays, linked lists offer flexible memory management and efficient insertions/deletions.


## 📂 Node Structure
A typical node (defined in `lists.h`) looks like:


```c
typedef struct list_s
{
char *str;
unsigned int len;
struct list_s *next;
} list_t;
```

## 📂 Node Structure
| File               | Description                                      |
|--------------------|--------------------------------------------------|
| `lists.h`          | Contains the definition of `list_t` and function prototypes |
| `0-print_list.c`   | Prints all elements of a list                    |
| `1-list_len.c`     | Returns the number of elements in a list         |
| `2-add_node.c`     | Adds a new node at the beginning of the list     |
| `3-add_node_end.c` | Adds a new node at the end of the list           |
| `4-free_list.c`    | Frees a linked list                              |
Si tu veux, je peux aussi l’intégrer

## 🔧 Compilation
To compile all source files:
```c
gcc -Wall -Werror -Wextra -pedantic *.c -o linked
```
## 💡 Key Concepts
- Pointer manipulation
- Dynamic memory allocation (malloc)
- Memory freeing (free)
- List traversal using while (node != NULL)
- Proper error handling (checking malloc results)