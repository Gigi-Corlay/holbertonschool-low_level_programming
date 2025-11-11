#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * string_nconcat - concatenates two strings
 * @s1: first string
 * @s2: second string
 * @n: number of bytes from s2 to concatenate
 *
 * Description: Allocates memory and returns a new string,
 * which contains s1 followed by the first n bytes of s2.
 * If n is greater than the length of s2, use the entire s2.
 * If s1 or s2 is NULL, treat it as an empty string.
 *
 * Return: Pointer to the newly allocated concatenated string,
 * or NULL if memory allocation fails.
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int len1 = 0;
	unsigned int len2 = 0;
	unsigned int total_len;
	char *new_str;
	unsigned int i = 0;
	unsigned int j;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	while (s1[len1] != '\0')
	{
		len1++;
	}
	while (s2[len2] != '\0')
	{
		len2++;
	}

	if (n >= len2)
	{
		n = len2;
	}

	total_len = len1 + n + 1;

	new_str = malloc(sizeof(*new_str) * total_len);

	if (new_str == NULL)
		return (NULL);

	while (s1[i] != '\0')
	{
		new_str[i] = s1[i];
		i++;
	}
	j = 0;
	while (s2[j] != '\0' && j < n)
	{
    	new_str[i] = s2[j];
    	i++;
    	j++;
	}
	new_str[i] = '\0';	

	return (new_str);
} 
