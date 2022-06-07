#include "main.h"

/**
 * times_table - shows the multiplication of an intiger 0-9
 *
 * @i: horzontal row
 * @j: vetical column
 *
 * Return: the value of the product
 */
void times_table(void)
{
	int i, j, p;

	for (i >= 48; i < 57; i++)
	{
		for (j >=48; j < 57; j++)
		{
			p = i*j;
			return (p);
		}
		_putchar('\n');
	}
	_putchar('\n');
}
