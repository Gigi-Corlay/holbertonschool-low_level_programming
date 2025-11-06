#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * helper_palindrome - Vérifie récursivement si une sous-chaîne est un palindrome
 * @s: chaîne de caractères à vérifier
 * @start: index du début de la sous-chaîne
 * @end: index de la fin de la sous-chaîne
 *
 * Return: 1 si la sous-chaîne est un palindrome, 0 sinon
 */
int helper_palindrome(char *s, int start, int end)
{
	if (start >= end)
	{
		return (1);
	}
	if (s[start] != s[end])
	{
		return (0);
	}
	return (helper_palindrome(s,start + 1, end - 1));
}

/**
 * is_palindrome - Vérifie si une chaîne est un palindrome
 * @s: chaîne de caractères à vérifier
 *
 * Return: 1 si la chaîne est un palindrome, 0 sinon
 */
int is_palindrome(char *s)
{
	int len;

	if (s == NULL)
	{
		return (0);
	}
	if (*s == '\0')
	{
		return (1);
	}

	len = strlen(s);

	return (helper_palindrome(s, 0, len - 1));
}
