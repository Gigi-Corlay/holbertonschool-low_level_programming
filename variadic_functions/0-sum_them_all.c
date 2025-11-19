#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"

/**
 * print_char - prints a char
 * @sep: separator string
 * @args: argument list
 */
void print_char(char *sep, va_list args)
{
	printf("%s%c", sep, va_arg(args, int));
}

/**
 * print_int - prints an integer
 * @sep: separator string
 * @args: argument list
 */
void print_int(char *sep, va_list args)
{
	printf("%s%d", sep, va_arg(args, int));
}

/**
 * print_float - prints a float
 * @sep: separator string
 * @args: argument list
 */
void print_float(char *sep, va_list args)
{
	printf("%s%f", sep, va_arg(args, double));
}

/**
 * print_string - prints a string
 * @sep: separator string
 * @args: argument list
 */
void print_string(char *sep, va_list args)
{
	char *s = va_arg(args, char *);

	if (s == NULL)
	s = "(nil)";
	printf("%s%s", sep, s);
}

/**
 * print_all - prints anything
 * @format: list of argument types
 */
void print_all(const char * const format, ...)
{
	va_list args;
	int i = 0;
	char *sep = "";

	va_start(args, format);

	while (format && format[i])
	{
	switch (format[i])
	{
		case 'c':
		print_char(sep, args);
		break;
		case 'i':
		print_int(sep, args);
		break;
		case 'f':
		print_float(sep, args);
		break;
		case 's':
		print_string(sep, args);
		break;
		default:
		i++;
		continue;
	}
	sep = ", ";
	i++;
	}

	va_end(args);
	printf("\n");
}
