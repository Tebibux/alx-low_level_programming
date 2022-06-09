#include "main.h"

/**
 * print_numbers - print the number from 0-9
 * @i: the nuber that printed
 * Return: 0 if Success
 */
void print_numbers(void)
{
	int i = 0;

	while (i < 10)
	{
		_putchar(i);
		i++;
	}
	_putchar('\n');
	return ();
}
