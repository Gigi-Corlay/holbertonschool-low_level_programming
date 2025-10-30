#include "main.h"
#include <stdio.h>

/**
 * leet - Encodes a string into 1337
 * @s: Pointer to the string to modify
 *
 * Return: Pointer to the modified string
 */
char *leet(char *s)
{
	char letters[] = "aAeEoOtTlL";
	char numbers[] = "4433007711";
	int i = 0;
	int j;

	while (s[i] != '\0')
	{
		j = 0;
		while (letters[j] != '\0')
		{
			if (s[i] == letters[j])
			{
				s[i] = numbers[j];
			}
			j++;
		}
		i++;
	}
	return (s);
}
