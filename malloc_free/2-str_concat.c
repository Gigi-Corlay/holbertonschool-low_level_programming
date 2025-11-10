#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * str_concat - concatène deux chaînes de caractères
 * @s1: première chaîne
 * @s2: deuxième chaîne
 *
 * Return: pointeur vers la nouvelle chaîne allouée (ou NULL si échec)
 */
char *str_concat(char *s1, char *s2)
{
	int len1 = 0;
	int len2 = 0;
	int total_len;
	char *new_str;
	int i = 0;
	int j = 0;

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

	total_len = len1 + len2 + 1;

	new_str = malloc(sizeof(*new_str) * total_len);

	if (new_str == NULL)
		return (NULL);

	while (s1[i] != '\0')
	{
		new_str[i] = s1[i];
		i++;
	}
	while (s2[j] != '\0')
	{
    	new_str[i] = s2[j];
    	i++;
    	j++;
	}
	new_str[i] = '\0';	

	return (new_str);
}
