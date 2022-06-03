#include <stdio.h>

/**
 *main - excition starts
 *
 *Return: 0 if success
 *
 */
int main(void)
{
	int i = 0;
	int j;
	
	putchar("%d", i);

	for (j = 1; j < 10; j++)
	{
		putchar(", %d", j);
	}
	putchar('\n');
	return (0);
}
