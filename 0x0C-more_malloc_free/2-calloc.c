#include "main.h"
#include <stdlib.h>

/**
 * _calloc - set array memory and sets zero
 * @nmenb: array to be filled
 * @size: calculate the size of an array
 * Return: 0 if success
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int i;
	char *ptr;
	if (nmemb == 0 || size == 0)
	{
		return NULL;
	}
	ptr = (int *) malloc(nmemb * size);
	if (ptr == NULL)	
	{
		return NULL;
	}
	for (i = 0; i < (nmemb * size); i++)
	{
		p[i] = 0;
	}
	return (p);

}
