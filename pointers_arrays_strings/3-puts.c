#include "main.h"

/**
 * _puts - prints a string followed by a new line
 * @str: pointer to the string to print
 *
 * Description: This function prints each character of the string
 *              to stdout using _putchar and adds a newline at the end.
 */
void _puts(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		_putchar(str[i]);
		i++;
	}
	_putchar('\n');
}
