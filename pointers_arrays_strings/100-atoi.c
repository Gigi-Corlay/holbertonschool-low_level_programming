#include "main.h"
#include <stdio.h>

/**
 * _atoi - converts a string to an integer
 * @s: pointer to the string to convert
 *
 * Description: This function converts the initial portion of a string
 * to an integer. It handles optional '+' and '-' signs before the
 * number. Conversion stops at the first non-numeric character
 * encountered after the digits.
 *
 * Return: the integer value represented by the string
 */
int _atoi(char *s)
{
	int i = 0;
	int sign = 1;
	unsigned number = 0;
	int started = 0;

	while (s[i] != '\0')
	{
		if (s[i] == '-')
		{
			sign *= -1;
		}
		if (s[i] >= '0' && s[i] <= '9')
		{
			number = number * 10 + (s[i] - '0');
			started = 1;
		}
		else if (started)
		{
			break;
		}
		i++;
	}
	return ((int)(number * sign));
}
