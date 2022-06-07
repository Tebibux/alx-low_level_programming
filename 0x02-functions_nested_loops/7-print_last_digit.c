#include "main.h"

/**
 * print_last_digit - Prints the last degit of the given intiger
 *
 * @n: is the value of an initger
 *
 * Return: the last digit of an intiger
 */

int print_last_digit(int n)
{
	int t;

	t = n % 10;
	if (t < 0)
	{
		_putchar(-t + 48);
		return (-t);
	}
	else
	{
		_putchar(t + 48);
		return (t);
	}
}
