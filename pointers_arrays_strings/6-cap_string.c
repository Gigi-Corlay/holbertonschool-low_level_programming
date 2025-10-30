#include "main.h"
#include <stdio.h>

int is_separator(char c)
{
	char sep[] = " \t\n,;.!?\"(){}";
	int i = 0;

	while (sep[i])
	{
		if (c == sep[i])
		return 1;
		i++;
	}
	return (0);
}

/**
 * cap_string - Capitalizes all words of a string
 * @s: Pointer to the string to modify
 *
 * Return: Pointer to the modified string
 */
char *cap_string(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		if (i == 0 || is_separator(s[i - 1]))
		{
			if (s[i] >= 'a' && s[i] <= 'z')
			{
				s[i] = s[i] - 'a' + 'A';
			}
		}
		i++;
	}
	return (s);
}
