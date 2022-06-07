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

	for (i >= 0; i < 10; i++)
	{
		for (j >= 0; j < 10; j++)
		{
			p = i*j;
			return (p);
		}
		_putchar('\n');
	}
	_putchar('\n');
}
