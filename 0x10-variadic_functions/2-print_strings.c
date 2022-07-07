#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_strings - printes stings
 * @separator: used to sparate string using space and comma
 * @n: the number of string.
 * @...: an ellipsis of variable.
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list strings;
	char *chr;
	unsigned int i = 0;

	va_start(strings, n);

	while (i < n)
	{
		chr = va_arg(strings, char *);

		if (chr == NULL)
		{
			printf("(nil)");
		}
		else
		{
			printf("%s", chr);
		}
		if (i != (n - 1) && separator != NULL)
		{
			printf("%s", separator);
		}
		i++;
	}
	printf("\n");

	va_end(strings);
}
