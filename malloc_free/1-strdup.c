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
	unsigned int length, counterTwo;
	char *strCopy;

	length = 0;
	counterTwo = 0;

	if (str == NULL)
	{
		return (0);
	}

	while (str[length] != '\0')
	{
		length++;
	}

	strCopy = malloc(sizeof(char) * (length + 1));

	if (strCopy == NULL)
	{
		return (NULL);
	}

	while (counterTwo < length)
	{
		strCopy[counterTwo] = str[counterTwo];
		counterTwo++;
	}
	strCopy[counterTwo] = '\0';
	return (strCopy);
}
