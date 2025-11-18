#include <stdarg.h>
#include "variadic_functions.h"

/**
 * sum_them_all - Returns the sum of all its parameters.
 * @n: The number of parameters passed to the function.
 *
 * Return: The total sum of all parameters, or 0 if n is 0.
 */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int index;
	int total, value;

	/* Liste des arguments variables */
	va_list args;

	if (n == 0)
		return (0);

	/* Initialise la liste */
	va_start(args, n);
	total = 0;
	for (index = 0; index < n; index++)
	{
		/* Récupère l’argument suivant */
		value = va_arg(args, int); 

		total += value;
	}
	/* Nettoie la liste */
	va_end(args);       
	return (total);
}
