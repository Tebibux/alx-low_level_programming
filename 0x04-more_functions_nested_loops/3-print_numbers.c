#include "main.h"

/**
 * print_numbers - print the number from 0-9
 * @i: the nuber that printed
 * Return: 0 if Success
 */
void print_numbers(void)
{
	int i;

	for (i = 48; i < 58; i++)
	{
		_putchar(i);
	}
	_putchar('\n');
	return ();
}
