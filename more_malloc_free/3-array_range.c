#include "main.h"
#include <stdlib.h>

/**
 * array_range - creates an array of integers from min to max (inclusive)
 * @min: the smallest value in the array
 * @max: the largest value in the array
 *
 * Description: This function allocates memory for an array of integers
 * containing all the values from min to max, inclusive, in ascending order.
 * If min > max or if malloc fails, the function returns NULL.
 *
 * Return: pointer to the newly created array, or NULL on failure
 */
int *array_range(int min, int max)
{
	int i;
	int taille = max - min + 1;
	int *tab;

	if (min > max)
		return (NULL);

	tab = malloc(sizeof(int) * taille);
	if (tab == NULL)
		return (NULL);

	for (i = 0; i < taille; i++)
	{
		tab[i] = min + i;
	}
	return (tab);
}
