#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Calculates and prints the sum of the even-valued terms
 * in the Fibonacci sequence whose values do not exceed 4,000,000.
 *
 * Return: Always 0 (Success)
 */
 int main(void)
{
	unsigned long a = 1;
	unsigned long b = 2;
	unsigned long tmp;
	unsigned long sum = 0;

	while (b <= 4000000)
	{
		if (b % 2 == 0)
		{
			sum += b;
		}
		tmp = a + b;
		a = b;
		b = tmp;

		printf("%lu\n", sum);
	}
	return (0);
}
