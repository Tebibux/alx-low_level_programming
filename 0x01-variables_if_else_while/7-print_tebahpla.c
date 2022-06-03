#include <stdio.h>
#include <string.h>

/**
 * main - Prints reversed alphabet
 *
 * Return: 0 if Success
 */
int main(void)
{
	char alpha[26] = "abcdefghijklmnopqrstuvwxyz";
	int i;

	for (i = 25; i >= 0; i--)
	{
		putchar(alpha[i]);
	}
	putchar('\n');
	return (0);
}
