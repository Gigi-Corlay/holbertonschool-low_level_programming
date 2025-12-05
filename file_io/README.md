
# C - File I/O
Ce projet porte sur la manipulation des fichiers en C à l'aide des appels système POSIX tels que open, read, write et close. Il met l'accent sur la compréhension des descripteurs de fichiers, la gestion des erreurs, et l'utilisation des permissions.

## Objectifs

Comprendre la différence entre les appels système POSIX et les fonctions de la bibliothèque standard C.

- Manipuler les fichiers via les descripteurs de fichiers.
- Manipuler les flags comme O_RDONLY, O_WRONLY, O_RDWR, O_CREAT, etc.
- Lire, écrire et fermer correctement un fichier.
- Gérer les erreurs liées aux appels système.

## Fonctions autorisées

- open

- read

- write

- close

- malloc, free, exit

## Contraintes

- Aucun usage de printf, puts, fopen, fread, fwrite, etc.

- Respect strict des normes Betty.

- Pas de variables globales.

- Maximum 5 fonctions par fichier.

- Utilisation de STDIN_FILENO, STDOUT_FILENO, STDERR_FILENO.

## Fonction principale du projet
#### ssize_t read_textfile(const char *filename, size_t letters);

#### Cette fonction doit :

- Ouvrir un fichier en lecture seule.

- Lire jusqu'à letters caractères.

- Afficher ces caractères sur la sortie standard POSIX.

- Renvoyer le nombre de caractères réellement lus et affichés.

- Renvoyer 0 en cas d'erreur.

## Compilation
gcc -Wall -Werror -Wextra -pedantic -std=gnu89 *.c -o file_io

#### Exemple d'utilisation

- ./file_io monfichier.txt

#### Notes

- Toujours vérifier le retour de open, read, write et close.

- Penser à libérer la mémoire allouée.

- Préférer les macros POSIX aux valeurs numériques.