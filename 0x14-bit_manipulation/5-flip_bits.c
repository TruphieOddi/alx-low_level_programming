#include "main.h"

/**
 * flip_bits - a function that returns the number of bits you would
 * need to flip to get from one number to another
 * @n: first long int
 * @m: second long int
 *
 * Return: number of bits to be flipped
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int d, num = 0;
	unsigned long int numb;
	unsigned long int both = n ^ m;

	for (d = 63; d >= 0; d--)
	{
		numb = both >> d;
		if (numb & 1)
			num++;
	}

	return (num);
}
