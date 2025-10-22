#include "main.h"

/**
 * print_alphabet_x10 - Prints the alphabet ten times
 *
 * This function prints the lowercase letters from 'a' to 'z'
 * ten times, followed by a newline each time. It utilizes
 * the _putchar function to output each character.
 */
void print_alphabet_x10(void)
{
	int n;
	char c;

	for (n = 0; n < 10; n++)
	{
		for (c = 'a'; c <= 'z'; c++)
		{
			_putchar(c);
		}
		_putchar('\n');
	}
}
