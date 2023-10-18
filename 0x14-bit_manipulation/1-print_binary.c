#include "main.h"

/**
 * print_binary - a function that prints the binary representation of a number
 * @n: said number
 *
 * Return: void
 */
void print_binary(unsigned long int n)
{
	int len = sizeof(n) * 8, z, lid = 1;

	if (n == 0)
	{
		_putchar('0');
		return;
	}

	for (z = len - 1; z >= 0; z--)
	{
		unsigned long int max = 1UL << z;

		if ((n & max) != 0)
		{
			_putchar('1');
			lid = 0;
		} else if (!lid || z == 0)
			_putchar('0');
	}
}
