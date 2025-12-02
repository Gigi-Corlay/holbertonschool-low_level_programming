
# Doubly linked lists
Ce document fournit une introduction claire et pédagogique aux **listes doublement chaînées**  en langage C. Il peut servir de README pour un projet.

## 🧩 Qu'est‑ce qu'une Doubly Linked List ?

Une doubly linked list (liste doublement chaînée) est une structure de données linéaire composée de nœuds. Chaque nœud contient :

* une donnée (data),
* un pointeur vers le nœud suivant (next),
* un pointeur vers le nœud précédent (prev).

Cette structure permet de parcourir la liste dans les deux sens.
```
NULL <- [ prev | data | next ] <-> [ prev | data | next ] <-> NULL
```
## 🛠️ Structure d'un nœud en C
```
typedef struct dlistint_s
{
int n;
struct dlistint_s *prev;
struct dlistint_s *next;
} dlistint_t;
```
## ⭐ Avantages

Parcours dans les deux sens (avant et arrière)

Suppression et insertion plus rapides qu'un tableau

Manipulation efficace des listes longues

## ⚠️ Inconvénients

Utilise plus de mémoire à cause du pointeur prev

Manipulation plus complexe qu'une liste simplement chaînée

## 📌 Opérations communes
#### ➕ Ajouter un nœud

* en tête

* en fin

* avant/après un nœud donné

#### ➖ Supprimer un nœud

* suppression du premier, dernier, ou d’un nœud spécifique

#### 🔍 Parcourir la liste

* du début vers la fin (next)

* de la fin vers le début (prev)

## 📂 Exemples de fonctions

* dlistint_t *add_dnodeint(dlistint_t **head, const int n);
* dlistint_t *add_dnodeint_end(dlistint_t **head, const int n);
* void free_dlistint(dlistint_t *head);
* size_t print_dlistint(const dlistint_t *h);

## 📝 Conseils pour le projet Holberton

- Toujours vérifier les pointeurs (NULL checks)
- Respecter les normes Betty
- Bien gérer les cas particuliers : liste vide, un seul élément, insertion en milieu
- Tester chaque fonction indépendamment

## 📖 Ressources
- Documentation Holberton
- C Programming Language – Kernighan & Ritchie
- Tutoriels sur les structures de données