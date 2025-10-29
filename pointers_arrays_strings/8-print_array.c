#include "main.h"
#include <stdio.h>

/**
 * print_array - prints n elements of an array of integers
 * @a: pointer to the array of integers
 * @n: number of elements to print
 *
 * Description: This function prints the first n elements of an integer array,
 * separated by a comma followed by a space. The numbers are displayed in the
 * same order as they are stored in the array. The output ends with a newline.
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%d", a[i]);
		if (i != n - 1)
		{
			printf (", ");
		}
	}

	printf ("\n");
}
