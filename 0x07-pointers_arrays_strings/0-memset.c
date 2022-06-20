#include "holberton.h"

/**
 * _memset - fills memory with a constant byte,
 * @p: memory area.
 * @b: constant byte.
 * @n: bytes filled.
 * Return: the pointer to dest.
 */
char *_memset(char *p, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		*(p + i) =  b;

	return (s);
}
