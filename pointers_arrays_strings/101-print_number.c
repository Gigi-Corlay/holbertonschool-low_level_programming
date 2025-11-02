#include "main.h"

/**
 * print_number - prints an integer
 * @n: the integer to print
 *
 * Return: void
 */
void print_number(int n)
{
	int digit;

	if (n < 0)
	{
		_putchar('-');

		digit = -(n % 10);
		n = -(n / 10);
	}
	else
	{
		digit = n % 10;
		n = n / 10;
	}

	if (n != 0)
		print_number(n);

	_putchar(digit + '0');
}
