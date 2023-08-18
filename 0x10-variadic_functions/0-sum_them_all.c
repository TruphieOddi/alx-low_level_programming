#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - returns sum of all parameters
 * @n: ammount of parameters passed
 * @...: number of parameters to calculate the sum from
 *
 * Return: if n == 0, then 0. Else sum of all parameters
 *
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list li;
	unsigned int u, sum = 0;

	va_start(li, n);

	for (u = 0; u < n; u++)
		sum += va_arg(li, int);

	va_end(li);

	return (sum);
}
