#include "main.h"

/**
 * print_numbers - print the number from 0-9
 * @i: the nuber that printed
 * Return: 0 if Success
 */
void print_numbers(void)
{
	int i = 0;

	while (i <= 9)
	{
		_putchar("%d", i);
		i++;
	}
	_putchar('\n');
}
