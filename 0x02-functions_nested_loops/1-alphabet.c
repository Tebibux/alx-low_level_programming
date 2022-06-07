#include "main.h"

/**
 * print_alphabet - extution start and print alphabet
 *
 * Return: 0 if Success
 */
void print_alphabet(void)
{
	int i;

	for (i = 97; i <= 122; i++)
	{
		_putchar(i);
	}
	_putchar('\n');
}
