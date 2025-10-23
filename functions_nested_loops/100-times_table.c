#include "main.h"

/**
 * print_number - prints a number (0–999) with correct spacing
 * @prod: the number to print
 *
 * Return: nothing
 */
void print_number(int prod)
{
	if (prod < 10)
		_putchar(prod + '0');
	else if (prod < 100)
	{
		_putchar((prod / 10) + '0');
		_putchar((prod % 10) + '0');
	}
	else
	{
		_putchar((prod / 100) + '0');
		_putchar(((prod / 10) % 10) + '0');
		_putchar((prod % 10) + '0');
	}
}

/**
 * print_times_table - prints the n times table, starting with 0
 * @n: the number defining the size of the times table
 *
 * Return: nothing
 */
void print_times_table(int n)
{
	int row, col, prod;

	if (n < 0 || n > 15)
		return;

	for (row = 0; row <= n; row++)
	{
		for (col = 0; col <= n; col++)
		{
			prod = row * col;

			if (col != 0)
			{
				_putchar(',');
				_putchar(' ');

				if (prod < 10)
				{
					_putchar(' ');
					_putchar(' ');
				}
				else if (prod < 100)
				{
					_putchar(' ');
				}
			}

			print_number(prod);
		}
		_putchar('\n');
	}
}

