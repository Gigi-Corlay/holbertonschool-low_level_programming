#include "main.h"
#include <stdio.h>

/**
 * _strcpy - copies the string pointed to by src into dest
 * @dest: pointer to the buffer where the string will be copied
 * @src: pointer to the source string to copy
 *
 * Description: This function copies the string pointed to by src,
 * including the terminating null byte '\0', to the buffer pointed to by dest.
 * The function returns a pointer to the destination buffer dest.
 */
char *_strcpy(char *dest, char *src)
{
	int i = 0;

	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}

	dest[i] = '\0';
	return dest;
}
