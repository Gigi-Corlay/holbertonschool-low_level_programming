#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Entry point of the program
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;
	int last_pos;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	last_pos = (n % 10 + 10) % 10;

	printf("Last digit of %d is %d ", n, last_pos);
	if (last_pos > 5)
		printf("and is greater than 5\n");
	else if (last_pos == 0)
		printf("and is 0\n");
	else
		printf("and is less than 6 and not 0\n");

	return (0);
}
