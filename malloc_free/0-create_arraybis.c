#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * create_array - Allocates an array of characters and initializes it
 * @c: The character used to initialize each element of the array.
 * @size: The size of the array to allocate
 *
 * Return: A pointer to the array or NULL if memory allocation fails
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
