#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * create_array - crée un tableau de chars et l'initialise avec un caractère donné
 * @size: la taille du tableau
 * @c: le caractère à utiliser pour initialiser le tableau
 *
 * Return: un pointeur vers le tableau, ou NULL si échec ou size == 0
 */

char *_strdup(char *str)
 {
	char * dest;
	int i;
	int n = 0;

	if (str == 0)
		return (NULL);

	while (str[n] != '\0')
	{
		 n++;
	}

	dest = malloc(sizeof(*dest) * (n + 1));

	if (dest == NULL)
		return (NULL);

	for (i = 0; str[i] != '\0'; i++)
	{
		dest[i] = str [i];
	}
	return (dest);
 }
