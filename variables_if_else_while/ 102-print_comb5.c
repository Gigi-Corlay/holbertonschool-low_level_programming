#include <stdio.h>

/**
 * main - prints all possible combinations of two two-digit numbers
 *
 * Description: The numbers should range from 00 to 99.
 * The two numbers must be separated by a space.
 * All numbers are printed with two digits (e.g. 01).
 * Combinations are separated by a comma and a space.
 * 00 01 and 01 00 are considered the same combination.
 * Only putchar can be used (maximum 8 times).
 * No char variables are allowed.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i, j;

	for (i = 0; i <= 99; i++)
	{
		for (j = i + 1; j <= 99; j++)
		{
			putchar(i / 10 + '0');
			putchar(i % 10 + '0'); 
			putchar(' ');
			putchar(j / 10 + '0'); 
			putchar(j % 10 + '0'); 

			if (i != 98 || j != 99)
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
