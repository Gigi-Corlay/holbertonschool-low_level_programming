#include "main.h"
#include <ctype.h>
#include <string.h>
#include <stdio.h>
#include <stdlib.h>

/**
 * _strlen_recursion - Retourne la longueur d'une chaîne
 * @s: chaîne de caractères
 *
 * Return: longueur de la chaîne
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	return (1 + _strlen_recursion(s + 1));
}

/**
 * helper_palindrome - Vérifie récursivement si une sous-chaîne est un palindrome
 * @s: chaîne à vérifier
 * @start: index de début
 * @end: index de fin
 *
 * Return: 1 si palindrome, 0 sinon
 */
int helper_palindrome(char *s, int start, int end)
{
	if (start >= end)
		return (1);

	if (s[start] != s[end])
		return (0);

	return (helper_palindrome(s, start + 1, end - 1));
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

	if (*s == '\0')
		return (1);

	len = _strlen_recursion(s);

	return (helper_palindrome(s, 0, len - 1));
}
