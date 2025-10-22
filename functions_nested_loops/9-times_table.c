#include "main.h"

/**
 * times_table - Prints the 9 times table, starting with 0.
 *
 * Description: This function prints the multiplication table
 * from 0x0 to 9x9 in a formatted manner using _putchar. Each
 * number is aligned such that single-digit numbers have a
 * leading space for proper formatting. Additionally, each
 * number is separated by a comma and a space, except for
 * the first number in each line.
 */
void times_table(void)
{
	int i, j, result;

	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			result = (i * j);

			if (j != 0)
			{
				_putchar(',');
				_putchar(' ');
			}

			if (result < 10)
			{
				if (j != 0)
					_putchar(' ');
				_putchar('0' + result);
			}
			else
			{
				_putchar(result / 10 + '0');
				_putchar(result % 10 + '0');
			}
		}
		_putchar('\n');
	}
}
