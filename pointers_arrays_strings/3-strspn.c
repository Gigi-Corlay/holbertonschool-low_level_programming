#include "main.h"
#include <stdio.h>

/**
* main - check the code
*
* Return: Always 0.
*/
unsigned int _strspn(char *s, char *accept)
{
	unsigned int count = 0;
	unsigned int i = 0, j;
	int found;

	while (s[i] != '\0')
	{
		found = 0;
		j = 0;
		while (accept[j]  != '\0')
		{
			if(s[i] == accept[j])
			{
				found = 1;
				break;
			}
			j++;
		}
		if (found)
		{
			count++;
		}
		else
		{
			break;
		}
		i++;
	}
	return (count);
}
