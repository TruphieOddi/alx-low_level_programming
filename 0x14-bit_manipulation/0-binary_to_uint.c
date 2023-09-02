#include "main.h"

/**
 * binary_to_uint - function that converts a binary number to unsigned int
 * @b: points to a string of 0 and 1 chars
 *
 * Return: converted number
 */
unsigned int binary_to_uint(const char *b)
{
	int d;
	unsigned int u = 0;

	if (!b)
		return (0);
	for (d = 0; b[d]; d++)
	{
		if (b[d] < '0' || b[d] > '1')
			return (0);
		u = 2 * u + (b[d] - '0');
	}

	return (u);
}
