#include "main.h"
#include <stdio.h>

/**
 * _strlen - Returns the length of a string.
 * @s: Pointer to the string to measure.
 *
 * Return: The number of characters in the string, excluding the null byte.
 */
int _strlen(char *s)
{
	int n = 0;

       	while (s[n] != '\0')
	{
		n++;
	}

	return (n);
}
