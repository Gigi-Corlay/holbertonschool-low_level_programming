#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints all single digit numbers of base 16 starting from 0
 *
 * Return: 0 (Success)
 */
int main(void)
{
	int nbr_hex = 48;

	while (nbr_hex < 58)
	{
		putchar(nbr_hex);
		nbr_hex++;
	}

	nbr_hex = 97;
	while (nbr_hex < 103)
        {
                putchar(nbr_hex);
                nbr_hex++;
        }
	putchar('\n');

	return (0);
}
