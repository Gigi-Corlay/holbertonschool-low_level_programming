#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_char - prints a char
 * @args: argument list
 */
void print_char(va_list args)
{
	printf("%c", va_arg(args, int));
}

/**
 * print_int - prints an integer
 * @args: argument list
 */
void print_int(va_list args)
{
	printf("%d", va_arg(args, int));
}

/**
 * print_float - prints a float
 * @args: argument list
 */
void print_float(va_list args)
{
	printf("%f", va_arg(args, double));
}

/**
 * print_string - prints a string
 * @args: argument list
 */
void print_string(va_list args)
{
	char *s = va_arg(args, char *);

	if (s == NULL)
	{
		printf("(nil)");
		return;
	}

	printf("%s", s);
}

void print_all(const char * const format, ...)
{
	printer_t ops[] = {
		{'c', print_char},
		{'i', print_int},
		{'f', print_float},
		{'s', print_string},
		{'\0', NULL}
	};

	va_list args;
	int i = 0, j;
	char *sep = "";

	va_start(args, format);

	while (format && format[i])
	{
		j = 0;
		while (ops[j].type)
		{
			if (format[i] == ops[j].type)
			{
				printf("%s", sep);
				ops[j].f(args);
				sep = ", ";
				break;
			}
			j++;
		}
		i++;
	}
	va_end(args);
	printf("\n");
}
