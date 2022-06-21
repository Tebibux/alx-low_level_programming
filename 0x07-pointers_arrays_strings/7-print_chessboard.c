#include "main.h"



void print_chessboard(char (*a)[8])
{
	unsigned int i, j;
	i = 0;
	j = 0;

	while (i < 9)
	{
		if(i%2 !=0)
		{
			_putchar('%d', m);
		}
		while (j < 9)
		{
			m = i;
			_putchar('\n');
			j++;
		}
		_putchar(a[i / 8][i - m]);
		i++;
	}
	_putchar('\n');
}
