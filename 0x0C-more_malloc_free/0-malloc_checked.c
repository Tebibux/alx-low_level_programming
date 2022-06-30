#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - pointer to the allocated memory
 * @b: intiger to be tested
 * Return: pointer if sucess
 */
void *malloc_checked(unsigned int b)
{
	int *s;
	
	s = malloc(b);
	if (s == NULL)
	{
		return (98);
	}
	return (s);
}
