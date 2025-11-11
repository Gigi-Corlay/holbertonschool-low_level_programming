#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * malloc_checked - alloue de la mémoire et vérifie l’échec
 * @b: nombre d’octets à allouer
 *
 * Return: pointeur vers la mémoire allouée, ou termine le programme avec 98
 */
 void *malloc_checked(unsigned int b)
 {
	void *ptr;

	ptr = malloc(b);

	if (ptr == NULL)
		exit(98);

	return (ptr);
 }
