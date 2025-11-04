#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - prints the sum of the two diagonals
 * of a square matrix of integers
 * @a: pointer to the first element of the matrix
 * @size: size of the matrix (number of rows/columns)
 *
 * Return: void
 */
void print_diagsums(int *a, int size)
{
	int i = 0;
	int sumOne = 0;
	int sumTwo = 0;

	for (i = 0; i < size; i++)
	{
		sumOne += a[i * size + i];
		sumTwo += a[i * size + (size -1 -i)];
	}
	printf("%d, %d\n", sumOne, sumTwo);
} 
