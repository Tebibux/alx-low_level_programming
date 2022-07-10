#include "main.h"

/**
 * print_chessboard - will print chessboard
 * @a: the chessboard
 * Return:
 */
void print_chessboard(char (*a)[8])
{
	int i, j;

	i = 0;
	while (a[i][7])
	{
		j = 0;
		while (j < 8)
		{
			_putchar(a[i][j]);
			j++;
		}
		_putchar('\n');
		i++;
	}
}
