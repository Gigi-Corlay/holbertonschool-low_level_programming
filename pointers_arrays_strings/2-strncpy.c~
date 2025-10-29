#include "main.h"
#include <stdio.h>

/**
 * _strncat - concatenates at most n characters from src
 *            to the end of the string dest
 * @dest: pointer to the destination string
 * @src: pointer to the source string
 * @n: maximum number of characters to be appended from src
 *
 * Return: pointer to the resulting string dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int i = 0;
	int j = 0;

	while (dest[i] != '\0')
	{
		i++;
	}
	while (src[j] != '\0' && j < n)
	{
		dest[i + j] = src[j];
		j++;
	}
	dest[i + j] = '\0';

	return (dest);
}
