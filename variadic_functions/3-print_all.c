#include <stdarg.h>
#include <stddef.h>
#include "variadic_functions.h"

/**
* struct printer - maps a format specifier to its print function
* @type: the format specifier (c, i, f, s)
* @f: function pointer to the print function
*/
typedef struct printer
{
	char type;
	void (*f)(va_list args);
} printer_t;

/* Helper to print unsigned int recursively */
void print_unsigned(unsigned int n)
{
	if (n / 10)
		print_unsigned(n / 10);

	_putchar((n % 10) + '0');
}

/* Print char */
void print_char(va_list args)
{
	_putchar(va_arg(args, int));
}

/* Print int */
void print_int(va_list args)
{
	int n = va_arg(args, int);

	if (n < 0)
	{
		_putchar('-');
		print_unsigned((unsigned int)(-n));

		return;
	}
	print_unsigned((unsigned int)n);

}

/* Print float with 6 decimal places */
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

/* Print string */
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

/* Main print_all function */
void print_all(const char * const format, ...)
{
	va_list args;
	printer_t ops[] = {
		{'c', print_char},
		{'i', print_int},
		{'f', print_float},
		{'s', print_string},
		{'\0', NULL}
	};
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
				if (sep[0])
				{
					_putchar(sep[0]);
					_putchar(sep[1]);
				}
				ops[j].f(args);
				sep = ", ";
				break;
			}
			j++;
		}
		i++;
	}

	va_end(args);
	_putchar('\n');
}
