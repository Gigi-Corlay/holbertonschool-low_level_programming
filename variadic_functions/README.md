# C - Variadic Functions

Ce document présente les bases des fonctions variadiques en langage C, leur utilisation, leur fonctionnement interne, ainsi que des exemples pratiques.

## 🌟 Introduction

Les fonctions variadiques sont des fonctions capables de recevoir un nombre variable d'arguments. En C, elles sont couramment utilisées dans des fonctions comme `printf`.

Elles reposent sur la bibliothèque standard `<stdarg.h>`.

## 📚 Bibliothèque `<stdarg.h>`

Cette bibliothèque fournit plusieurs macros permettant de parcourir une liste d'arguments :

* **va_list** : type utilisé pour stocker la liste des arguments.
* **va_start(list, param)** : initialise la liste d'arguments.
* **va_arg(list, type)** : récupère l'argument suivant du type indiqué.
* **va_end(list)** : libère la mémoire utilisée par `va_list`.

## 🧠 Fonctionnement d'une fonction variadique

Pour créer une fonction variadique :

1. Indiquer `...` en dernier paramètre.
2. Initialiser la liste avec `va_start`.
3. Parcourir les arguments avec `va_arg`.
4. Terminer avec `va_end`.

## 📌 Exemple simple : somme de n entiers

```c
#include <stdarg.h>
#include <stdio.h>

int sum(int n, ...)
{
    va_list args;
    int total = 0;

    va_start(args, n);

    for (int i = 0; i < n; i++)
        total += va_arg(args, int);

    va_end(args);

    return total;
}

int main(void)
{
    printf("Somme : %d\n", sum(4, 1, 2, 3, 4));
    return 0;
}
```

## 🧩 Bonnes pratiques

* Toujours appeler `va_end` avant de quitter la fonction.
* Les paramètres variadiques doivent être récupérés dans le même ordre que fournis.
* Toujours fournir au moins un paramètre fixe pour guider `va_start`.

## 💡 Cas d'utilisation courants

* Fonctions d'affichage (`printf`, `_printf`).
* Fonctions d'agrégation (somme, moyenne, etc.).
* API nécessitant un nombre flexible de paramètres.

## 🏁 Conclusion

Les fonctions variadiques permettent d'écrire du code plus flexible et puissant. Elles demandent cependant de la rigueur pour éviter les erreurs liées aux types et au nombre d'arguments.

N'hésite pas à me demander si tu veux :

* Ajouter une section
* Ajouter des schémas ou exemples
* L'adapter pour Holberton
* Le transformer en README pour GitHub
