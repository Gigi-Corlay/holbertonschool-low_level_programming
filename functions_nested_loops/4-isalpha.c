#include "main.h"

/**
 * _islower - checks if alphabetic characte.
 * @c: the character to be checked.
 *
 * Return: 1 if c is a lowercase letter ('a' to 'z'),
 *         0 otherwise.
 */
int _isalpha(int c)
{
	if ((c >= 'a' &&  c <= 'z') || (c >= 'A' &&  c <= 'Z'))
	{
		return (1);
	}
	return (0);
}
