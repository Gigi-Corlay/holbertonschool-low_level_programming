
# 🧩 C - Hash tables
📖 Description

Ce projet introduit la structure de données table de hachage en langage C.
Une table de hachage permet de stocker des paires clé → valeur et d’y accéder très rapidement grâce à une fonction de hachage.

## 🧠 Concepts appris
- Comprendre la notion de fonction de hachage
- Utiliser hash_djb2, un algorithme de hachage classique
- Gérer les collisions avec chaînage (linked lists)
-Comprendre la structure :
```
typedef struct hash_node_s
{
    char *key;
    char *value;
    struct hash_node_s *next;
} hash_node_t;

typedef struct hash_table_s
{
    unsigned long int size;
    hash_node_t **array;
} hash_table_t;
```
- Créer, afficher et supprimer une table de hachage

- Développer en respectant les contraintes Holberton (Betty)

| Fichier                 | Description                                  |
| ----------------------- | -------------------------------------------- |
| `0-hash_table_create.c` | Création d’une table de hachage              |
| `1-djb2.c`              | Implémentation de la fonction `hash_djb2`    |
| `2-key_index.c`         | Calcule l'indice correspondant à une clé     |
| `3-hash_table_set.c`    | Ajoute un élément dans la table              |
| `4-hash_table_get.c`    | Récupère la valeur associée à une clé        |
| `5-hash_table_print.c`  | Affiche la table de hachage                  |
| `6-hash_table_delete.c` | Supprime et libère toute la table de hachage |

## ⚙️ Compilation
```
gcc -Wall -Werror -Wextra -pedantic -std=gnu89 *.c -o hash
```
## 🧪 Exemple d’utilisation
**Création et insertion**
```
#include "hash_tables.h"

int main(void)
{
    hash_table_t *ht;

    /* Création d'une table de hachage de taille 1024 */
    ht = hash_table_create(1024);

    /* Ajout de quelques éléments */
    hash_table_set(ht, "language", "C");
    hash_table_set(ht, "school", "Holberton");

    return (0);
}
```
## 🔍 Gestion des collisions

**Le projet utilise le chaînage :**

- Chaque case de array peut contenir une liste chaînée
- Les clés ayant le même index sont ajoutées en tête de liste

## 🧹 Libération de mémoire
**Le fichier 6-hash_table_delete.c supprime correctement :**

- toutes les chaînes key

- toutes les value

- tous les nœuds

- le tableau

- la table
