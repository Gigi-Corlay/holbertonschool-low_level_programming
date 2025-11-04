#include "main.h"
#include <stdio.h>

/**
 * _helper_prime_number - checks if a number is prime recursively
 * @n: number to check
 * @i: divisor to test starting from 2
 *
 * Return: 1 if n is prime, 0 if not
 */
int _helper_prime_number(int n, int i)
{
	if ((i * i) > n)
		return (1);

	else if ((n % i) == 0)
		return (0);

	else
		return (_helper_prime_number(n, i + 1));
}

/**
 * is_prime_number - checks if a number is a prime number
 * @n: number to evaluate
 *
 * Return: 1 if n is prime, 0 if not
 */
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);

		else
		return (_helper_prime_number(n, 2));
}
