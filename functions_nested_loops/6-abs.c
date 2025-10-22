#include "main.h"
#include <stdio.h>

/**
 * _abs - computes the absolute value of an integer
 * @n: the integer to check
 *
 * Return: the absolute value of the integer
 */
int _abs(int n)
{
	if (n > 0)
	{
		return (n);
	}
	else if (n < 0)
	{
		return (-n);
	}
	else
	{
		return (0);
	}
}
