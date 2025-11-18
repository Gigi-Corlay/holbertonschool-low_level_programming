#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
* print_numbers - Prints numbers, separated by a string.
* @separator: The string to be printed between numbers.
* @n: The number of integers passed to the function.
*
* Description: If separator is NULL, no separator is printed.
* Prints a new line at the end.
*/
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;

	int value;

	va_list args;

	va_start(args, n);
	for (i = 0; i < n; i++)
	{
		value = va_arg(args, int);
		printf("%d", value);

	/* Afficher le séparateur seulement si ce n’est pas le dernier nombre */
		if (i < n - 1 && separator != NULL)
			printf("%s", separator);
	}

	va_end(args);
	printf("\n");
}
