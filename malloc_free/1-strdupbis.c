#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _strdup - copy of the string given as a parameter.
 * @str: unsigned int
 * Return: char pointer
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
