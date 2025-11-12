#include "main.h"
#include <stdlib.h>

/**
 * create_array - crée un tableau de chars et l'initialise avec un caractère donné
 * @size: la taille du tableau
 * @c: le caractère à utiliser pour initialiser le tableau
 *
 * Return: un pointeur vers le tableau, ou NULL si échec ou size == 0
 */
 char *create_array(unsigned int size, char c)
 {
	unsigned int i;
	char *array;

	if (size == 0)
		return (NULL);

	array = malloc(sizeof(char) * size);

	if (array == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		array[i] = c;

	return (array);
 }
