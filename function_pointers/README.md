# Function Pointers — README

## 📌 Introduction

Ce projet explore les **pointeurs de fonction en langage C**, un concept permettant de stocker l'adresse d'une fonction dans une variable, de les passer comme arguments et de créer du code plus flexible, modulaire et dynamique.

---

## 🎯 Objectifs du projet

* Comprendre ce qu'est un pointeur de fonction
* Déclarer, affecter et utiliser un pointeur de fonction
* Appeler une fonction via un pointeur
* Passer une fonction en paramètre (callbacks)
* Utiliser un tableau de pointeurs de fonction

---

## 📚 Concepts importants

### 🔹 1. Déclaration

```c
int (*p)(int, int);
```

Ici, `p` est un pointeur vers une fonction qui prend deux entiers et retourne un entier.

---

### 🔹 2. Affectation

```c
int add(int a, int b)
{
    return a + b;
}

p = add; /* ou p = &add */
```

---

### 🔹 3. Appel via un pointeur de fonction

```c
int result = p(2, 3);
/* ou */
int result = (*p)(2, 3);
```

---

### 🔹 4. Passer une fonction en paramètre

```c
void array_iterator(int *array, size_t size, void (*action)(int))
{
    size_t i;
    for (i = 0; i < size; i++)
        action(array[i]);
}
```

Exemple d'action :

```c
void print_element(int n)
{
    printf("%d\n", n);
}
```

Utilisation :

```c
int arr[] = {1, 2, 3, 4};
array_iterator(arr, 4, print_element);
```

---

### 🔹 5. Comparateur (callback)

```c
int int_index(int *array, int size, int (*cmp)(int))
{
    int i;

    if (array == NULL || cmp == NULL || size <= 0)
        return (-1);

    for (i = 0; i < size; i++)
    {
        if (cmp(array[i]))
            return (i);
    }
    return (-1);
}
```

Exemple de comparateur :

```c
int is_positive(int n)
{
    return (n > 0);
}
```

---

## 🧮 Mini-calculatrice avec tableau de pointeurs de fonction

### Fonctions d'opérations

```c
int add(int a, int b) { return a + b; }
int sub(int a, int b) { return a - b; }
int mul(int a, int b) { return a * b; }
int div(int a, int b) { return a / b; }
int mod(int a, int b) { return a % b; }
```

### Tableau de pointeurs

```c
int (*ops[5])(int, int) = {add, sub, mul, div, mod};
```

### Exemple d'utilisation

```c
int result = ops[0](4, 2); /* add → 6 */
```

---

## 🛠️ Compilation

Compiler avec les flags Holberton :

```sh
gcc -Wall -Werror -Wextra -pedantic *.c -o prog
```

---

## ✔️ Points clés à retenir

* Un pointeur de fonction doit correspondre **exactement** à la signature de la fonction.
* Les pointeurs de fonction sont utiles pour :

  * callbacks
  * dispatch tables
  * menus et gestionnaires d'événements
  * algorithmes génériques

---

## 📄 Conclusion

Les pointeurs de fonction sont un outil essentiel du langage C, permettant de créer du code modulaire, flexible et évolutif. Ce projet introduit ce concept et montre comment l'utiliser efficacement dans divers contextes.

---

Si vous souhaitez ajouter des schémas, des exemples plus avancés ou adapter le README à votre propre projet Holberton, je peux le faire !
