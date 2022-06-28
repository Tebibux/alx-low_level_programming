#include "main.h"
#include <stdlib.h>

/**
 * create_array - creates array with specific char
 * @size: size of array
 * @c: specific char
 * Return: return pointer if success
 */
char *create_array(unsigned int size, char c)
{
	char *chr;
	unsigned int i;

	if (size == 0)
	{
		return (NULL);
	}
	chr = malloc(sizeof(c) * size);

	if (chr == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < size; i++)
	{
		chr[i] = c;
	}
	return (chr);

}
