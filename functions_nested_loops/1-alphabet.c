#include "main.h"

/**
 * print_alphabet - Prints the alphabet in lowercase
 *
 * This function prints the letters from 'a' to 'z',
 * followed by a newline. It uses the _putchar function
 * to output each character.
 */
void print_alphabet(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
	{
		_putchar(c);
	}
	_putchar('\n');
}
