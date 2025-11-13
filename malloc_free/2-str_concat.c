#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * str_concat - concatenates two strings
 * @s1: first string
 * @s2: second string
 *
 * Return: pointer to newly allocated concatenated string, or NULL on failure
 */
char *str_concat(char *s1, char *s2)
{
	int i, j, len1 = 0, len2 = 0;
	char *strTemp;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	while (s1[len1] != '\0')
		len1++;

	while (s2[len2] != '\0')
		len2++;

	strTemp = malloc(sizeof(char) * (len1 + len2 + 1));
	if (strTemp == NULL)
		return (NULL);

	for (i = 0; i < len1; i++)
		strTemp[i] = s1[i];

	for (j = 0; j < len2; j++)
		strTemp[i + j] = s2[j];

	strTemp[i + j] = '\0';

	return (strTemp);
}
