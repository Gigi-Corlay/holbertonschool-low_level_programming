#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"

/* Structure pour mapper un type à sa fonction */
typedef struct printer
{
    char type;
    void (*f)(va_list args);
} printer_t;

/* Fonctions de print */
void print_char(va_list args)
{
    printf("%c", va_arg(args, int));
}

void print_int(va_list args)
{
    printf("%d", va_arg(args, int));
}

void print_float(va_list args)
{
    printf("%f", va_arg(args, double));
}

void print_string(va_list args)
{
    char *s = va_arg(args, char *);
    if (!s)
        s = "(nil)";
    printf("%s", s);
}

/* La fonction print_all sans switch */
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
