#include "main.h"

/**
 * _isalpha - checks if the character is an alphabetic letter.
 * @c: the character to be checked.
 *
 * Return: 1 if c is an alphabetic letter (either 
 *         lowercase 'a' to 'z' or uppercase 'A' to 'Z'),
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
