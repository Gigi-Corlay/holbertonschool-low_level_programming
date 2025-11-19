#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_strings - Prints strings, separated by a string.
 * @separator: The string to be printed between the strings.
 * @n: The number of strings passed to the function.
 *
 * Description: If separator is NULL, no separator is printed.
 * If one of the strings is NULL, prints (nil) instead.
 * Prints a new line at the end.
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	char *str;

	va_list args;

	va_start(args, n);
	for (i = 0; i < n; i++)
	{
		str = va_arg(args, char *);

	if (str == NULL)
	{
    	printf("(nil)");
	}
		else
	{
    	printf("%s", str);
	}

		if (i < n - 1 && separator != NULL)
			printf("%s", separator);
	}

	va_end(args);
	printf("\n");
}
