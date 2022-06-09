#include "main"
/**
 * print_most_numbers - prints numbers between 0 to 9
 * (neither 2 nor 4).
 * Return: no return.
 */
void print_most_numbers(void)
{
	int i = 0;

	while (i < 10)
	{
		if (ch != 2 && ch != 4)
			_putchar(ch);
		i++;
	}
	_putchar('\n');
}
