#include "main.h"

/**
 * _print_rev_recursion - prints the revers of a string using recurion
 * @s: pointer points the location of a character
 * Return: nothing
 */
void _print_rev_recursion(char *s)
{
	if (*s == '\0')
	{
		break;
	}
	else
	{
		_print_rev_recursion(s+1);
		_putchar(*s);
	}	
}
