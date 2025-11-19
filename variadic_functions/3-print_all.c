#include <stddef.h>
#include "variadic_functions.h"

/**
 * print_char - prints a char
 * @args: argument list
 */
void print_char(va_list args)
{
	_putchar(va_arg(args, int));
}

/**
 * print_unsigned - prints an unsigned integer recursively
 * @n: number to print
 */
void print_unsigned(unsigned int n)
{
	if (n / 10)
		print_unsigned(n / 10);

	_putchar((n % 10) + '0');
}

/**
 * print_int - prints an integer
 * @args: argument list
 */
void print_int(va_list args)
{
	int n = va_arg(args, int);

	if (n < 0)
	{
		_putchar('-');
		print_unsigned((unsigned int)(-n));
	}
	else
	{
		print_unsigned((unsigned int)n);
	}
}

/**
 * print_float - prints a float
 * @args: argument list
 */
void print_float(va_list args)
{
	double n = va_arg(args, double);
	int int_part, i, digit;
	double frac;

	if (n < 0)
	{
		_putchar('-');
		n = -n;
	}

	int_part = (int)n;
	frac = n - int_part;

	print_unsigned(int_part);
	_putchar('.');

	i = 0;
	while (i < 6)
	{
		frac *= 10;
		digit = (int)frac;
		_putchar(digit + '0');
		frac -= digit;
		i++;
	}
}

/**
 * print_string - prints a string
 * @args: argument list
 */
void print_string(va_list args)
{
	char *s = va_arg(args, char *);
	int i = 0;

	if (!s)
		s = "(nil)";

	while (s[i])
	{
		_putchar(s[i]);
		i++;
	}
}

/**
 * print_all - prints anything
 * @format: list of types
 */
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
	int i = 0, j, printed = 0;

	va_start(args, format);

	while (format && format[i])
	{
		j = 0;
		while (ops[j].type)
		{
			if (format[i] == ops[j].type)
			{
				if (printed)
				{
					_putchar(',');
					_putchar(' ');
				}

				ops[j].f(args);
				printed = 1;
				break;
			}
			j++;
		}
		i++;
	}

	va_end(args);
	_putchar('\n');
}
