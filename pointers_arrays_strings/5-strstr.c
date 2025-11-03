#include "main.h"
#include <stdio.h>

/**
 * _strstr - locates a substring in a string
 * @haystack: pointer to the string to search in
 * @needle: pointer to the substring to search for
 *
 * Return: pointer to the beginning of the located substring,
 *         or NULL if the substring is not found
 */
char *_strstr(char *haystack, char *needle)
{
	int i = 0, j;

	/* Si needle est vide, retourner haystack */
	if (*needle == '\0')
	{
		return (haystack);
	}
	/* Parcourir haystack */
	while (haystack[i] != '\0')
	{
		j = 0;
		/* Comparer needle avec la sous-chaîne de haystack à partir de i */
		while (needle[j] != '\0' && haystack[i + j] == needle[j])
		{
			j++;
		}
		/* Si on a parcouru toute la longueur de needle, correspondance trouvée */
		if (needle[j] == '\0')
		{
				return (&haystack[i]);
		}
		i++;
	}
	/* Aucune correspondance trouvée */
	return (NULL);
}
