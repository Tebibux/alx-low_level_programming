#include <stdio.h>

/**
 * main - prints the number of argument 
 * @argc: intiger
 * @i: initiger value 
 * @argv: arrays of argument name
 * @i: size equalizer
 * Return: 0 if seccess
 */
int main(int argc, char* argv[] __attribute__((unused)))
{
	int i;
	i = argc - 1;
	printf("%d\n", i);
	return (0);
}
