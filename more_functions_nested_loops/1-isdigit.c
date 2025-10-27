#include "main.h"
#include <stdio.h>

/**
 * _isdigit - vérifie si un caractère est un chiffre.
 * @c: le caractère à vérifier.
 *
 * Return: 1 si c est un chiffre (c'est-à-dire '0' à '9'), sinon 0.
 */
int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
	{
		return (1);
	}
	return (0);
}
