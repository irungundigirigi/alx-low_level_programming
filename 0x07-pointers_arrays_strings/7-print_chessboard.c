#include "main.h"

/**
 * print_chessboard - print a 2d array of chessboard
 * @: array of 2d chars
 */

void print_chessboard(char (*a)[8])
{
	int y, x;

	y = 0;

	while (y < 8)
	{
		x = 0;

		while (x < 8)
		{
			_putchar(a[y][x]);
			x++;
		}
		_putchar('\n');
		y++;
	}
}
