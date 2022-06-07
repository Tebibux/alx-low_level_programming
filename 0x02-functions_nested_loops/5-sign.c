#include "main.h"

/**
 * print_sign: print the sign of the value and print the approximate sign
 *
 *@n - the varialbe inputed
 *
 * Return - 1 if @n > 0, 0 if @n == 0 and -1 if @n < 0
 */
 int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-1');
		return (-1);
	}
	_putchar('\n');

}
