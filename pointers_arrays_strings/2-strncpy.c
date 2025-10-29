#include "main.h"
#include <stdio.h>

/**
 * _strncpy - copies at most n characters from the string src
 *            to the buffer pointed to by dest
 * @dest: pointer to the destination buffer
 * @src: pointer to the source string
 * @n: maximum number of characters to copy
 *
 * Description: This function copies up to n characters from src to dest.
 *              If src is shorter than n, the remainder of dest is filled
 *              with null bytes ('\0'). Works like the standard strncpy.
 *
 * Return: pointer to the resulting string dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;

	while (src[i] != '\0' && i< n)
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}

	return (dest);
}
