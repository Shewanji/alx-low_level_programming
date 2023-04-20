#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - function that returns the sum of all its parameters
 * @n: resepresents the number of arguments
 * Return: always 0
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list nums;
	unsigned int count;
	int sum = 0;

	if (n == 0)
		return (0);

	va_start(nums, n);

	for (count = 0; count < n; count++)
		sum += va_arg(nums, int);

	va_end(nums);
	return (sum);
}
