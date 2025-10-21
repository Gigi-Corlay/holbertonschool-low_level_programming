#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints the lowercase alphabet in reverse
 *
 * Return: 0 (Success)
 */
int main(void)
{
	int c_inv = 'z';

	while (c_inv >= 'a')
	{
		putchar(c_inv);
		c_inv--;
	}
	putchar('\n');

	return (0);
}
