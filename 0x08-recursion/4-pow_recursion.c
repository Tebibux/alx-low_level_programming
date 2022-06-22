#include "main.h"

/**
 * _pow_recursion - calculate the intiger power to intiger
 * @n: the base intiger
 * @y: the power intiger
 * Return: return the result
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return -1;
	}
	else if (n != 0)
	{
		y--;
		return (n * _pow_recursion(n,y));
	}
	else
	{
		return 1;
	}
}
