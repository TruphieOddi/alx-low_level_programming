#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_numbers - function that prints numbers, followed by a new line \n
 * @separator: is the string that is to be printed between numbers
 * @n: is the number of integers passed to the function
 * @...: numbers to be printed
 *
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list numb;
	unsigned int u;

	va_start(numb, n);

	for (u = 0; u < n; u++)
	{
		printf("%d", va_arg(numb, int));

		if (u != (n - 1) && separator != NULL)
			printf("%s", separator);
	}

	printf("\n");

	va_end(numb);
}
