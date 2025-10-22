#include "main.h"

/**
 * print_last_digit - prints the last digit of a number
 * @n: the number from which to extract the last digit
 *
 * Return: the value of the last digit
 */
int print_last_digit(int n)
{
	n = (n % 10);

	if (n < 0)
		n = -n;

	_putchar('0' + n);

	return (n);
}
