#include "main.h"

/**
 * print_triangle - prints a triangle of #
 * @size: size of the triangle
 */
void print_triangle(int size)
{
    int row, space, hash;

    if (size <= 0)
    {
        _putchar('\n');
        return;
    }

    for (row = 1; row <= size; row++)
    {
        /* Print spaces */
        for (space = size - row; space > 0; space--)
            _putchar(' ');

        /* Print # */
        for (hash = 0; hash < row; hash++)
            _putchar('#');

        /* New line */
        _putchar('\n');
    }
}
