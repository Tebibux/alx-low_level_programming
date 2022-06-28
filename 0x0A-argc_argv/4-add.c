#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main: adds positive nubmers
 * @argc: nuber of command
 * @argv: array of that command
 * Return: 0 - success
 */
int main(int argc, char* argv[])
{
	int i;
	int j;
	int sum = 0;

	for (i = 1; i <= argc; i++)
	{
		for (j = 0; argv[i][j] != '\0'; j++)
		{
			if (!isdigit(argv[i][j]))
			{
				printf("Error\n");
				return (1);
			}
		sum += atoi(argv[i]);
		}
	}
	printf("%d\n", sum);
	return (0);
}
