#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _strdup - Duplicate a string by creating a new allocated memory.
 * @str: The string to duplicate. If NULL, returns NULL.
 *
 * Return: A pointer to the newly allocated string, or NULL if it fails
 *         to allocate memory or if str is NULL.
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
