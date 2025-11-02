#include "main.h"

/**
* main - check the code
*
* Return: Always 0.
*/
void print_number(int n)
{
	int digit;

	if (n < 0)
	{
		_putchar('-');
		digit = -(n % 10);
		n = n / 10 ;
		n = -n;
	}
	else
	{
		digit = n % 10;
		n = n / 10;
	}

	if (n != 0)
		print_number(n);

	_putchar('0' + digit);
}
