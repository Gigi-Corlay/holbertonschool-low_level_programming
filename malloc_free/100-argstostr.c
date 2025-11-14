#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * argstostr - description…
 * @ac: nombre d’arguments
 * @av: tableau des arguments
 * Return: pointer ou NULL
 */
char *argstostr(int ac, char **av)
{
	int i, j, k, size = 0;
	char *str;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
		{
			size++;
		}
	size++;
	}

	str = malloc(sizeof(char) * (size + 1));
	if (str == NULL)
	{
		return (NULL);
	}

	k = 0;
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
		{
			str[k] = av[i][j];
        	k++;
		}
		str[k] = '\n';
    	k++;
	}
	str[k] = '\0';
	return (str);
}
