#include "main.h"

/**
 * print_diagsumes - print the diagonal sum with each side
 * @i: iterator
 * @sum1: the size + i
 * @sum2: the size - i
 * Return: null
 */
void print_diagsums(int *a, int size)
{
	int i = 0;
	int sum1 = 0;
	int sum2 = 0;

	while (i < (size * size))
	{
		if (i % (size + 1) == 0)
		{
			sum1 = sum1 + *(a + i);
		}
		if (i % (size - 1) == 0 && i != 0 && i < size *size -1)
		{
			sum2 = sum2 + *(a + 1);
		}
		i++;
	}
	printf("%d, %d\n", sum1, sum2);
}
