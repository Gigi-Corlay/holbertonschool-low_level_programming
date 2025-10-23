#include <stdio.h>

/**
 * main - computes the sum of all multiples of 3 or 5 below 1024
 *
 * Description: Loops through all natural numbers from 0 to 1023,
 *              checks if each number is a multiple of 3 or 5,
 *              adds the multiples to a sum, and prints the result.
 *
 * Return: 0 (success)
 */
int main(void)
{
	int sum = 0;
	int i;

	for (i = 0; i < 1024; i++)
	{
		if (i % 3 == 0 || i % 5 == 0)
		{
			sum = sum + i;
		}
	}
	printf("%d\n", sum);
}
