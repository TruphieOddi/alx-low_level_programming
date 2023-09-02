#include "main.h"
/**
 * get_bit - a function that returns the value of a bit at a given index
 * @n: said number to be searched
 * @index: is the index, starting from 0 of the bit you want to get
 *
 * Return: value of said bit
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int d;

	if (index > 63)
		return (-1);

	d = (n >> index) & 1;

	return (d);
}
