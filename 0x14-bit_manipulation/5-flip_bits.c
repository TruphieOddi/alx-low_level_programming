#include "main.h"

/**
 * flip_bits - retuns no. of bits needrd to flip to realize said num
 * @n: said number
 * @m: 2nd num
 *
 * Return: bits number
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int y = n ^ m, x = 0;

	while (y)
	{
		x += y & 1;
		y >>= 1;
	}

	return (x);
}
