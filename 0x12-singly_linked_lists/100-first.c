#include <stdio.h>

void __attribute__((constructor)) mainmain(void);

/**
 * mainmain - Prints a string before the
 *        main function is executed.
 */
void mainmain(void)
{
	printf("You're beat! and yet, you must allow,\n"
	       "I bore my house upon my back!\n");
}
