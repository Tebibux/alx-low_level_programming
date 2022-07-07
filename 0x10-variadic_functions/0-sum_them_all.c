#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - return the summ of all parameters.
 * @n: The number of parameter passed.
 * @...: ellipsis (number of variable passed).
 *
 * Return: sum if succes if not 0.
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list nums;
	unsigned int i = 0, sum = 0;

	va_start(nums, n);

	while (i < n)
	{
		sum += va_arg(nums, int);
		i++;
	}
	va_end(nums);
	return (sum);
}
