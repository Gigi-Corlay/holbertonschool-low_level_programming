#include "main.h"
#include <stdio.h>

/**
 * _helper - recursive function to find natural square root
 * @n: number to find the square root of
 * @i: current test value (starts from 0 and increments)
 *
 * Return: natural square root of n, or -1 if none exists
 */
int _helper(int n, int i)
{
	if (i * i == n)
		return (i);

	else if ((i * i) > n)
		return (-1);

	else
		return (_helper(n, i + 1));
}

/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: number to find the square root of
 *
 * Return: natural square root, or -1 if n has no natural square root
 */
int _sqrt_recursion(int n)
{
	if ( n < 0)
		return (-1);

	else
		return (_helper(n, 0));
}
