#include <stdio.h>
#include "main.h"

/**
 * _strlen - caluclate the length of the string
 * @s: the value that holds the address of the string
 * @c: the value that converts the address to the string value
 * Return: nothing
 */

int _strlen(char *s)
{
	int c;
	c = &s;
	strlen(c);
}
