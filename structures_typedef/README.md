# Structures en C

Les structures en C permettent de regrouper différentes variables sous un même nom, formant un type de données personnalisé. Elles sont utiles pour organiser des données complexes de manière claire et modulable. Ce fichier vous guide à travers les bases des structures en C, leur déclaration, leur utilisation et des exemples pratiques.

## Table des matières
- [Déclaration d'une structure](#déclaration-dune-structure)
- [Initialisation d'une structure](#initialisation-dune-structure)
- [Accès aux membres d'une structure](#accès-aux-membres-dune-structure)
- [Utilisation des pointeurs sur structures](#utilisation-des-pointeurs-sur-structures)
- [Structures imbriquées](#structures-imbriquées)
- [Exemple complet](#exemple-complet)
- [Conclusion](#conclusion)

## Déclaration d'une structure

Une structure en C est déclarée à l'aide du mot-clé `struct`, suivi du nom de la structure et des membres qui la composent. Voici un exemple de déclaration d'une structure représentant une **Personne** :

```c
struct Personne {
    char nom[50];
    int age;
    float taille;
};
```

Dans cet exemple :
- `nom` est une chaîne de caractères (tableau de char) pour stocker le nom de la personne.
- `age` est un entier pour l'âge.
- `taille` est un flottant pour la taille.

## Initialisation d'une structure

### Initialisation au moment de la déclaration

On peut initialiser une structure lors de sa déclaration, comme suit :

```c
struct Personne p1 = {"Alice", 30, 1.75};
```

### Initialisation après la déclaration

Il est aussi possible d'initialiser une structure après sa déclaration :

```c
struct Personne p2;
strcpy(p2.nom, "Bob");  // Utilisation de strcpy pour initialiser les chaînes
p2.age = 25;
p2.taille = 1.80;
```

## Accès aux membres d'une structure

Les membres d'une structure sont accessibles à l'aide de l'opérateur `.` (point). Exemple :

```c
#include <stdio.h>

int main() {
    struct Personne p1 = {"Alice", 30, 1.75};

    printf("Nom : %s\n", p1.nom);
    printf("Âge : %d\n", p1.age);
    printf("Taille : %.2f\n", p1.taille);

    return 0;
}
```

**Sortie :**
```
Nom : Alice
Âge : 30
Taille : 1.75
```

## Utilisation des pointeurs sur structures

Les structures peuvent être manipulées via des pointeurs. Pour accéder aux membres d'une structure à travers un pointeur, on utilise l'opérateur `->`. Exemple :

```c
#include <stdio.h>

int main() {
    struct Personne p1 = {"Alice", 30, 1.75};
    struct Personne *p_ptr = &p1;

    printf("Nom : %s\n", p_ptr->nom);
    printf("Âge : %d\n", p_ptr->age);
    printf("Taille : %.2f\n", p_ptr->taille);

    return 0;
}
```

**Sortie :**
```
Nom : Alice
Âge : 30
Taille : 1.75
```

## Structures imbriquées

Il est possible d'utiliser une structure à l'intérieur d'une autre structure, ce qui permet de créer des structures plus complexes. Par exemple :

```c
struct Adresse {
    char rue[100];
    char ville[50];
    int code_postal;
};

struct Personne {
    char nom[50];
    int age;
    struct Adresse adresse;  // Structure imbriquée
};
```

On peut initialiser et accéder aux membres comme suit :

```c
#include <stdio.h>
#include <string.h>

int main() {
    struct Personne p1 = {"Alice", 30, {"123 rue de Paris", "Paris", 75000}};

    printf("Nom : %s\n", p1.nom);
    printf("Âge : %d\n", p1.age);
    printf("Adresse : %s, %s, %d\n", p1.adresse.rue, p1.adresse.ville, p1.adresse.code_postal);

    return 0;
}
```

**Sortie :**
```
Nom : Alice
Âge : 30
Adresse : 123 rue de Paris, Paris, 75000
```

## Exemple complet

Voici un exemple complet qui illustre l'utilisation des structures avec des initialisations et des accès aux membres :

```c
#include <stdio.h>
#include <string.h>

// Déclaration des structures
struct Adresse {
    char rue[100];
    char ville[50];
    int code_postal;
};

struct Personne {
    char nom[50];
    int age;
    struct Adresse adresse;
};

int main() {
    // Initialisation de la structure Personne
    struct Personne p1;
    strcpy(p1.nom, "Alice");
    p1.age = 30;
    strcpy(p1.adresse.rue, "123 rue de Paris");
    strcpy(p1.adresse.ville, "Paris");
    p1.adresse.code_postal = 75000;

    // Affichage des informations
    printf("Nom : %s\n", p1.nom);
    printf("Âge : %d\n", p1.age);
    printf("Adresse : %s, %s, %d\n", p1.adresse.rue, p1.adresse.ville, p1.adresse.code_postal);

    return 0;
}
```

**Sortie :**
```
Nom : Alice
Âge : 30
Adresse : 123 rue de Paris, Paris, 75000
```

## Conclusion

Les structures en C sont un puissant mécanisme permettant de regrouper des données liées sous une même entité. Elles facilitent la gestion de données complexes et permettent une meilleure organisation du code. Grâce à leur flexibilité, les structures peuvent être utilisées dans une grande variété de scénarios pour organiser et manipuler des informations.
