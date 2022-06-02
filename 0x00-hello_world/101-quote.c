#include <stdio.h>

/**
 *main - begining of excution
 *
 *return: 1
 *
 */
int main(void)
{
	char msg[] = "and that piece of art is useful\" - Dora Karpar, 2015-10-19\n";
	write(2, msg, sizeof(msg));
	return (1);
}
