#include "main.h"

/**
 * _sqrt_recursion - calculate the squar root of a number
 * @n: an intiger to be calculated
 * Return: the root of value of an intiger
 */
int _sqrt_recursion(int n)
{
	int x = 0.01;
	int i;
	if (n < 0)
	{
		return (-1);
	}
	else if (i = x && i*i < n)
	{
		x++;
		return _sqrt_recursion(n);
	}
	else
	{
		return (i);
	}
}
