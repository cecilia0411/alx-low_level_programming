#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - returns the sum of all its paramters
 * @n: the number of paramters
 * @...: A variable number of paramters
 * Return: If n == 0, return 0
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list sta;
	unsigned int i, sum = 0;

	va_start(sta, n);

	for (i = 0; i < n; i++)
		sum += va_arg(sta, int);

	va_end(sta);

	return (sum);
}
