#ifndef VARIADIC_FUNCTIONS_H
#define VARIADIC_FUNCTIONS_H

#include <stdarg.h>

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

int _putchar(char c);
int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);
void print_char(va_list args);
void print_int(va_list args);
void print_float(va_list args);
void print_string(va_list args);

#endif
