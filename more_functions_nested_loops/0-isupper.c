#include "main.h"
#include <stdio.h>

/**
 * _isupper - checks if a character is uppercase.
 * @c: the character to check.
 *
 * Return: 1 if c is uppercase, otherwise 0.
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	return (0);
}
