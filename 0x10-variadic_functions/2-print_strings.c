#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_strings - a function that prints strings, followed by a new line \n
 * @separator: is the string to be printed between the strings
 * @n: is the number of strings passed to the function
 * @...: number of strings to be printed
 *
 * Description: If separator is NULL, don’t print it
 *	If one of the string is NULL, print (nil) instead
 *
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list sen;
	char *string;
	unsigned int u;

	va_start(sen, n);

	for (u = 0; u < n; u++)
	{
		string = va_arg(sen, char *);

		if (string == NULL)
			printf("(nil)");
		else
			printf("%s", string);

		if (u != (n - 1) && separator != NULL)
			printf("%s", separator);
	}

	printf("\n");

	va_end(sen);
}
