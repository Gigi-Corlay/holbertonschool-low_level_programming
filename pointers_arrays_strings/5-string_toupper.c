#include "main.h"
#include <stdio.h>

/**
 * string_toupper - Converts all lowercase letters of a string to uppercase
 * @s: Pointer to the string to be modified
 *
 * Return: Pointer to the modified string
 */
char *string_toupper(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		if (s[i] >= 'a' && s[i] <= 'z')
		{
			s[i] = s[i] - 'a' + 'A';
		}
		i++;
	}
	return (s);
}
