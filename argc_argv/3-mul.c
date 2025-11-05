#include "main.h"
#include <stdio.h>
#include <unistd.h>

/**
* _putchar - writes the character c to stdout
* @c: The character to print
*
* Return: On success 1.
* On error, -1 is returned, and errno is set appropriately.
*/
int _putchar(char c)
{
		return (write(1, &c, 1));
}


/**
 * _atoi - converts a string to an integer
 * @s: string to convert
 * Return: integer value
 */
int _atoi(char *s)
{
    int sign = 1;
    unsigned int res = 0;

    if (*s == '-')
    {
        sign = -1;
        s++;
    }

    while (*s)
    {
        if (*s >= '0' && *s <= '9')
            res = res * 10 + (*s - '0');
        else
            break;
        s++;
    }

    return (res * sign);
}

/**
* print_number - prints an integer using _putchar
* @n: the number to print
*/
void print_number(int n)
{
	long num = n;

	if (num < 0)
	{
		_putchar('-');
		num = -num;
	}

	if (num / 10)
		print_number(num / 10);

	_putchar((num % 10) + '0');
}

/**
* main - multiplies two numbers passed as arguments
* @argc: number of arguments
* @argv: array of arguments
*
* Return: 0 on success, 1 on error
*/
int main(int argc, char *argv[])
{
	int num1, num2, result;

	char *err = "Error\n";

	if (argc != 3)
	{
		while (*err)
			_putchar(*err++);
		return (1);
	}

	num1 = _atoi(argv[1]);
	num2 = _atoi(argv[2]);
	result = num1 * num2;

	print_number(result);
	_putchar('\n');

	return (0);
}
