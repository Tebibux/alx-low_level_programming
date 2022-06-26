#include <stdio.h>
#include <stdlib.h>

/**
 * main - multiplies the argument after the name
 * @argc: intiger argument passed to the func
 * @argv: the array of string
 * Return: 0 if success
 */
int main(int argc, char* argv[])
{
	int i;
	int mul;

	mul = 1;
	if (argc > 1)
	{
		for (i = 1; i < argc; i++)
		{
			mul *= atoi(argv[i]);
		}
		printf("%d\n", mul);
	}
	return (0);
}
