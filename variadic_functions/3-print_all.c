#include <stdio.h>
#include <stdarg.h>
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
	int index = 0;
	char *sep = "";

	va_start(args, format);

	while (format[index] != '\0')
	{
		if (format[index] == 'c')
			print_char(sep, args);
		if (format[index] == 'i')
			print_int(sep, args);
		if (format[index] == 'f')
			print_float(sep, args);
		if (format[index] == 's')
			print_string(sep, args);

		sep = ", ";
		index++;
	}
	va_end(args);
	printf("\n");
}
