#include "variadic functions.h" #include <stdarg.h>
/* *
* sum_them_all - Returns the sum
* @n: The number of passed parameters
* @...: A variable number for sum to be cal culated
*
* Return: if n equals 0, 0. else sum of all parameters.
* /
int sum them all (const unsigned int n,
{
va_list ap;
unsigned int u, sum = 0;
va_start (ap, n);
for (u = 0; u < n; u++)
sum += va_arg (ap, int);
va_ end(ap);
return (sum);
}

