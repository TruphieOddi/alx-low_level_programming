#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 *print_all - a function that prints anything
 *@format: is a list of types of arguments passed to the function
 *
 */
void print_all(const char * const format, ...)
{
	int t = 0;
	char *sen, *sepa = "";

	va_list form;

	va_start(form, format);

	if (format)
	{
		while (format[t])
		{
			switch (format[t])
			{
				case 'c':
					printf("%s%c", sepa, va_arg(form, int));
					break;
				case 'i':
					printf("%s%d", sepa, va_arg(form, int));
					break;
				case 'f':
					printf("%s%f", sepa, va_arg(form, double));
					break;
				case 's':
					sen = va_arg(form, char *);
					if (!sen)
						sen = "(nil)";
					printf("%s%s", sepa, sen);
					break;

				default:
					t++;
					continue;
			}
			sepa = ", ";
			t++;
		}
	}

	printf("\n");
	va_end(form);
}

