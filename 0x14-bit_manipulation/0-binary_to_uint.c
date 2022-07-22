#include "main.h"

/**
 * binary_to_uint - Converts a binary number to an unsigned int.
 * @b: A pointer to a string of 0 and 1 chars.
 *
 * Return: return 0 if fail, Otherwise - the converted number.
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int num = 0;
	int len;

	if (b[len] == '\0')
	{
		return (0);
	}
	for (len = 0; (b[len] == '0') || (b[len] == '1'); len++)
	{
		num <<= 1;
		num += b[len] - '0';
	}
	return (num);
}
