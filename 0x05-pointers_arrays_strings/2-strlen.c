#include "main.h"

/**
 * _strlen - caluclate the length of the string
 * @s: the value that holds the address of the string
 * Return: c
 */

int _strlen(char *s)
{
	int c = 0;	
	while (*(s + c) != '\0')
		c++;
	return (c);
}
