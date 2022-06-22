#include "main.h"

/**
 * factorial - calculate the factorial of an intiger
 * @n: intiger
 * Return: return factorial
 */
int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n)
	{
		return (n * factorial(n - 1));
	}
	else
	{
		return (1);
	}
}
