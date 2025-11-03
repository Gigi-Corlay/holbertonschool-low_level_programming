#include "main.h"
#include <stdio.h>

/**
 * print_chessboard - prints an 8x8 chessboard
 * @a: pointer to a 2D array representing the chessboard
 *
 * Description: This function prints the pieces stored in the
 * 8x8 array to display a chessboard layout.
 *
 * Return: void
 */
void print_chessboard(char (*a)[8])
 {
	int row, col;

	for (row = 0; row < 8; row++)
	{
		for (col = 0; col < 8; col++)
		{
			_putchar(a[row][col]);
		}
		_putchar('\n');
	}
 }
