#include "main.h"
#include <stdio.h>

/**
 * print_times_table - prints the n times table, starting with 0
 * @n: the number defining the size of the times table
 *
 * Return: nothing
 */
void print_times_table(int n)
{
	int row, col, prod;

	if ((n > 15) || (n < 0))
	{
                        return;
	}

	for (row = 0; row <= n; row++)
	{
		for (col = 0; col <= n; col++)
		{
			prod = (row * col);

/* Met une virgule et un espace après chaque nombre sauf le premier */
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


/* Affiche le produit correctement selon sa taille */
			if (prod < 10)
			{
				_putchar(prod + '0');
			}
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

		_putchar('\n');

	}
}
