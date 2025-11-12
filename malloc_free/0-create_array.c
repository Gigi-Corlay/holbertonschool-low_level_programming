#include "main.h"
#include <stdio.h>
#include <stdlib.h>

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
	char *character;

	i = 0;

	if (size == 0)
	{
		return (NULL);
	}

	character = malloc(sizeof(char) * size);

	if (character == NULL)
	{
		return (NULL);
	}

	while (i < size)
	{
		character[i] = c;
		i++;
	}
	return (character);
}
