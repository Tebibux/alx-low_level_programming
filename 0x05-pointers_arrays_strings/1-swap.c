#include "main.h"

/**
 * swap_int - exchanges the value of one to the other
 * @a: the memory address of variable a
 * @b: the memory address of variable b
 * Return: nothing
 */
void swap_int(int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}
