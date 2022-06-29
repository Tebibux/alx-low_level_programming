#include "main.h"
#include <stdlib.h>

/**
 * _strdup - return a pointer to a newly allocated space
 * @str: pointer initger
 * Return: return pointer
 */
char *_strdup(char *str)
{
	char *s;
	unsigned int i, j;

	i = 0;
	j = 0;
	
	if (str == NULL)
	{
		return (NULL);
	}
	while (str[i] != '\0')
	{
		i++;
	}
	s = (char *)malloc(sizeof(char) * (i + 1));
	if (s == NULL)
	{
		return (NULL);
	}
	while (j <= 1)
	{
		s[j] = str[j];
		j++;
	}
	return (s);
}
