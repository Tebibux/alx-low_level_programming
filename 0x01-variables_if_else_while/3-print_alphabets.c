#include <stdio.h>

/**
 * main - print the alphabet in lower case and upper case respectively
 *
 * Return - alwasy 0 if successides
 */
int main(void)
{
	char lower_case[26] = "abcdefghijklmnopqrstuvwxyz";
	char upper_case[26] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
	int i;
	int j;

	for (i = 0; i < 26; i++)
	{
		putchar(lower_case[i]);
	}
	for (j = 0; j < 26; j++)
	{
		putchar(upper_case[j]);
	}

	putchar('\n');
	return (0);
}
