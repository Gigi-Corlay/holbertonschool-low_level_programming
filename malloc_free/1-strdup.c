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
	int i;
	int n = 0;
	char * dest;

	if (str == NULL)
		return (0);

	while (str[n] != '\0')
	{
		 n++;
	}

	dest = malloc(sizeof(char) * (n + 1));

	if (dest == NULL)
		return (NULL);

	for (i = 0; i < n; i++)
	{
		dest[i] = str[i];
	}
	dest[i] = '\0';
	return (dest);
}
