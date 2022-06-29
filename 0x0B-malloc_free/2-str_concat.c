#include "main.h"
#include <stdlib.h>

/**
 * str_concat - return pionter to newly allocated space
 * @s1: the first string
 * @s2: the second string
 * Return: pointer is success
 */
char *str_concat(char *s1, char *s2)
{
	char* prt;
	unsigned int i, j, k, limit;
	
	i = 0;
	j = 0;
	k = 0;
	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	while (s1[i] != '\0')
	{
		i++;
	}
	while (s2[j] != '\0')
        {
               	j++;
        }
	prt = malloc(sizeof(char) * (i + j + 1));
	if (prt == NULL)
	{
		free (prt);
		return (NULL);
	}
	while (k <= i)
	{
		prt[k] = s1 [k];
		k++;
	}
	limit = j;
	while (j <= limit)
	{
		prt[k] = s2[j];
		j++;
	}
	return (prt);
}
