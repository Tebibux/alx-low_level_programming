#include "main.h"

/**
 * print_alphabet_x10 - it prints alphabet a-z 10x
 *
 * Return: 0 if success
 */
void print_alphabet_x10(void)
{
	int i;
	int j;

	for (j = 1; j <= 10; j++)
	{
		for (i = 97; i <= 122; i++)
		{
			_putchar(i);
		}
		_putchar('\n');
	}
}
