🌀 Récursivité en C

Ce projet a pour objectif de comprendre et maîtriser le principe de récursivité en langage C.
La récursivité est une technique de programmation où une fonction s'appelle elle-même pour résoudre un problème.

📚 Concepts abordés

Définition de la récursivité

Cas de base (base case)

Appel récursif (recursive case)

Stack / pile d'exécution

Risque de stack overflow

Comparaison récursivité vs itération

🧠 Qu'est-ce que la récursivité ?

Une fonction récursive est une fonction qui :

Possède au moins un cas de base permettant d’arrêter la récursion

Possède au moins un appel récursif progressant vers le cas de base

🧮 Exemple simple : Factorielle
Formule mathématique
n! = n × (n - 1)!
0! = 1  -> cas de base

Code en C
int factorial(int n)
{
    if (n < 0)
        return -1; /* Gestion d'erreur */
    if (n == 0)
        return 1; /* Cas de base */
    return n * factorial(n - 1); /* Appel récursif */
}

🔁 Exemple : Afficher une chaîne de caractères
void print_string(char *s)
{
    if (*s == '\0')
        return; /* Cas de base */
    putchar(*s);
    print_string(s + 1); /* Appel récursif */
}

⚠️ Points importants

Toujours définir un cas de base

Vérifier que l’appel récursif se rapproche du cas de base

Attention aux ressources : trop d'appels récursifs = stack overflow

La récursivité peut simplifier certains problèmes (ex: arbres, fractales, tri)

✅ Quand utiliser la récursivité ?
Situations	Pourquoi
Manipulation d'arbres	Parcourir des nœuds naturellement
Algorithmes de tri (QuickSort, MergeSort)	Découpage du problème en sous-problèmes
Problèmes mathématiques (factorielle, Fibonacci)	Relation définie récursivement
🏁 Conclusion

La récursivité est un outil puissant mais doit être utilisée avec précaution.
Toujours penser au cas de base, éviter les appels infinis, et évaluer si une solution itérative serait plus efficace.

Maîtriser la récursivité, c’est comprendre comment décomposer un problème en sous-problèmes.

📎 Ressources

C Programming Tutorial – Recursion

Holberton / ALX resources sur la récursivité

"The C Programming Language" – Kernighan & Ritchie (Chapitre récursion)