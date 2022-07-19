#include "main.h"

/**
 * print_chessboard- function that prints the chessboard.
 * @a: string to print
 */

void print_chessboard(char (*a)[8])
{
	int x, y, column=8;

	for (x = 0; a[x][7]; x++)
	{
		for (y = 0; y < column; y++)
			_putchar(a[x][y]);
		_putchar('\n');
	}
}
