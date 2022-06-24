#include <stdio.h>

/**
 * main - prints the command passed in new line
 * @i: iterator initger
 * @argc: position of argument passed
 * @argv: an arrays of string
 * Return: 0 if success
 */

int main(int argc, char* argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
