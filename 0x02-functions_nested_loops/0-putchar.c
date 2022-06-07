#include "main.h"

/**
 * main - Prints _putchar as a message
 *
 * Return: On 0 if success
 */
int main(void)
{
	int str[] = {95, 112, 117, 116, 99, 104, 97, 114};
	int strt, sz;	

	sz = sizeof(str) / sizeof(int);
	
	for (strt = 0; strt < sz; strt++)
	{
		_putchar(str[strt]);
	}
	_putchar('\n');
	return (0);
}
