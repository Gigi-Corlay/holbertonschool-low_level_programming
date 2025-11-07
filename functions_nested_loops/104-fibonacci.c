#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Prints the first 50 Fibonacci numbers,
 * starting with 1 and 2, separated by a comma and a space.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int count;
	unsigned long a = 1;
	unsigned long b = 2;
	unsigned long tmp;

	printf("%lu, %lu", a, b);

	for (count = 2; count < 50; count++)
	{
		tmp = a + b;
		printf(", %lu", tmp);
		a = b;
		b = tmp;
	}

	printf("\n");
	return (0);
}
