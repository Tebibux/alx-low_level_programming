#include <stdio.h>
#include "main.h"
#include <string.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main: add number that passed after the number is include
 * @argc: nuber of command
 * @argv: array of that command
 * Return: 0 - success
 */
int main(int argc, char *argv[])
{
	int i, j, length, sum;
	char *ptr;

	if (argc < 2)
	printf("0\n");
	else
	{
		sum = 0;
		for (i = 1; i < argc; i++)
		{
			ptr = argv[i];
			length = strlen(ptr);
			for (j = 0; j < length; j++)
			{
				if (isdigit(*(ptr + j)) == 0)
				{
					printf("Error\n");
					return (1);
				}
			}

			sum += atoi(argv[i]);
		}
		printf("%d\n", sum);
	}
	return (0);
}
