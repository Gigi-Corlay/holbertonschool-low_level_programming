📘 README — Comprendre malloc en C
🧠 Qu’est-ce que malloc ?

malloc (Memory Allocation) est une fonction de la bibliothèque standard C (stdlib.h) qui permet d’allouer dynamiquement de la mémoire pendant l’exécution d’un programme.

Elle renvoie un pointeur vers la zone mémoire allouée, ou NULL si l’allocation échoue.

🧩 Prototype
void *malloc(size_t size);


size → le nombre d’octets à allouer.

Le retour est de type void *, donc tu dois le convertir (caster) vers le type de pointeur souhaité.

⚙️ Exemple simple
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int *tab;
    int i;

    /* Allocation dynamique pour 5 entiers */
    tab = malloc(sizeof(int) * 5);

    if (tab == NULL)
    {
        printf("Erreur : allocation échouée\n");
        return (1);
    }

    /* Initialisation du tableau */
    for (i = 0; i < 5; i++)
        tab[i] = i + 1;

    /* Affichage du contenu */
    for (i = 0; i < 5; i++)
        printf("tab[%d] = %d\n", i, tab[i]);

    /* Libération de la mémoire allouée */
    free(tab);

    return (0);
}

🧾 Explication du code

malloc(sizeof(int) * 5)
→ alloue de la mémoire pour 5 entiers (soit environ 20 octets sur une machine 64 bits).

Vérification du pointeur
→ Si malloc échoue, elle renvoie NULL. Toujours vérifier avant d’utiliser la mémoire.

Utilisation du tableau
→ On peut utiliser tab comme un tableau normal.

free(tab)
→ Libère la mémoire allouée.
Ne pas libérer provoque une fuite mémoire (memory leak).

🧰 Bonnes pratiques

Toujours vérifier le retour de malloc.

Toujours libérer la mémoire avec free().

Éviter d’utiliser la mémoire après free() (cela provoque un “use after free”).

Utiliser valgrind pour détecter les erreurs mémoire.