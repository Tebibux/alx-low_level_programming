#include "main.h"

/**
 * _strchr - locates the location of a character
 * @s: string
 * @c: character
 * Return: the pointer where the character is found or occured
 */
char *_strchr(char *s, char c)
{
	unsigned int i = 0;
	
	while (*( s + i) != '\0')
	{
		if (*(s+i) == c)
		{
			return (s + i);
		}
		i++;
	}
	if (*(s + i) == c)
	{
		return (s + i);
	}
	return ('\0');
}
