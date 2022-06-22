#include "main.h"

/**
 * _puts_recursion - puts a sting in recurion
 * @s: string that be in the sting
 * Return: nothing
 */
void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar('\n');
	}
	else
	{
		_putchar(*s);
		_puts_recursion(s + 1);
	}
}
