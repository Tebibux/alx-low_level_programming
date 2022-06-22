#include "main.h"

/**
 * _strlen_recursion - gives the length of string passed
 * @s: The string to be used
 * Return: Return the lenght of string
 */
int _strlen_recursion(char *s)
{
	if(*s != '\0')
	{
		return 1 + _strlen_recursion(s + 1);
	}
}
