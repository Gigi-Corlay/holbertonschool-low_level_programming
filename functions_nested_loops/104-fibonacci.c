#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Prints the first 98 Fibonacci numbers,
 * starting with 1 and 2, separated by a comma and a space.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int count;
	unsigned long a1 = 0, a2 = 1;
	unsigned long b1 = 0, b2 = 2;
	unsigned long tmp1, tmp2;
	unsigned long max = 1000000000; /* 10^9, pour découper les grands nombres */

	printf("%lu, %lu", a2, b2);

	for (count = 2; count < 98; count++)
	{
		tmp1 = a1 + b1;
		tmp2 = a2 + b2;

		if (tmp2 >= max)
		{
			tmp2 -= max;
			tmp1++;
		}

		if (tmp1 > 0)
			printf(", %lu%09lu", tmp1, tmp2);
		else
			printf(", %lu", tmp2);

		a1 = b1;
		a2 = b2;
		b1 = tmp1;
		b2 = tmp2;
	}

	printf("\n");
	return (0);
}
