#include "main.h"

/**
 * rev_string - reverse a string
 * @s: pointer to the string to reverse
 */
void rev_string(char *s)
{
	int len = 0;
	int i, j;
	char tmp;

	while (s[len] != '\0')
	{
		len++;
	}

	j = 0;
	i = len - 1;

	while (j < i)
	{
		tmp = s[j];
		s[j] = s[i];
		s[i] = tmp;
		j++;
		i--;
	}
}
