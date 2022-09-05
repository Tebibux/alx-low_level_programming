#include "main.h"

/**
 * _strspn - gets the length of a prefix substring.
 * @s: initial segment.
 * @accept: accepted bytes.
 * Return: the number of accepted bytes.
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int i, j, bool;
	i = 0;
	j = 0;
	while (*(s + i) != '\0')
	{
		bool = 1;
		while (*(accept + j) != '\0')
		{
			if (*(s + i) == *(accept + j))
			{
				bool = 0;
				break;
			}
			j++;
		}
		if (bool == 1)
			break;
		i++;
	}
	return (i);
}
