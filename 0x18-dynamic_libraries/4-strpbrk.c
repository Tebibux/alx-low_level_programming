#include "main.h"

/**
 * _strpbrk - search a string for any of a set of bytes
 * @s: first string
 * @accept: second string 
 * Retrun: a pointer to the byte in s that matches or null if so byte found
 */
char *_strpbrk(char *s, char *accept)
{
	unsigned int i, j;
	i = 0;
	j = 0;

	while ((*s+i) != '\0')
	{
		while (*(accept + j) != '\0')
		{
			if (*(s + i) == *(accept + j))
			{
				return (s + i);
			}
			j++;
		}
		i++;
	}
	return ('\0');
}
