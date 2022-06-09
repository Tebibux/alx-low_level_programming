#include "main.h"

/**
 * _isdigit - checks if teh parameter is digit or not.
 * @c: is input character.
 * Return: 1 if the charater is a digi, 0 otherwise
 */
int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
