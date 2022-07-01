#include "main.h"
#include <stdlib.h>

/**
 * _calloc - set array memory and sets zero
 * @nmenb: array to be filled
 * @size: calculate the size of an array
 * Return: returns pointer.
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int i;
	char *ptr;
	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}
	ptr = malloc(nmemb * size);
	if (ptr == NULL)	
	{
		return (NULL);
	}
	for (i = 0; i < (nmemb * size); i++)
	{
		ptr[i] = 0;
	}
	return (ptr);

}
