#include "main.h"

/**
 * _abs - compute the absolut value of a given intiger
 *
 * @i: input integer.
 *
 * Return: returns the absolut value
 */
int _abs(int i)
{
	if (i >= 0)
	{
		return (i);
	}
	else
	{
		return (i * -1);
	}
}
