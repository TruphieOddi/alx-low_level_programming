#include "main.h"

/**
 * print_binary - a function that prints the binary representation of a number
 * @n: said number to be printed
 *
 */
void print_binary(unsigned long int n)
{
	int d, num = 0;
	unsigned long int u;

	for (d = 63; d >= 0; d--)
	{
		u = n >> d;

		if (u & 1)
		{
			_putchar('1');
			num++;
		}
		else if (num)
			_putchar('0');
	}
	if (!num)
		_putchar('0');
}
