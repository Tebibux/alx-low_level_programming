#include "main.h"

/**
 * print_chessboard - will print chessboard
 * @i: row
 * @j: colument
 * Return:
 */
void print_chessboard(char (*a)[8])
{
	unsigned int i, j;
	i = 0;
	j = 0;

	while (i < 64)
	{
		if(i % 8 == 8 && i != 0)
		{
			j = i;
			_putchar('\n');
		}
		_putchar(a[i / 8][i - j]);
		i++;
	}
	_putchar('\n');
}
