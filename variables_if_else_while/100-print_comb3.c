#include <stdio.h>

/**
* main - prints all possible different combinations of two digits
*
* Description: The two digits must be different.
* 01 and 10 are considered the same combination.
* Combinations are printed in ascending order, separated by ', '.
* Only putchar can be used (maximum 5 times).
*
* Return: Always 0 (Success)
*/
int main(void)
{
	int i, j;

	for (i = 0; i < 10; i++)
	{
		for (j = i + 1; j < 10; j++)
		{
			putchar(i + '0');
			putchar(j + '0');
			if (i != 8 || j != 9)
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
