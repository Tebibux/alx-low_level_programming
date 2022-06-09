#include "main.h"

/**
 * print_numbers - prints numbers between 0 to 9.
 * @i: intiger starts in ASCI
 * Return: no return.
 */
void print_numbers(void)
{
	int i = 48;

	while (i < 58)
	{
		_putchar(i);
		i++;
	}
	_putchar('\n');
}
