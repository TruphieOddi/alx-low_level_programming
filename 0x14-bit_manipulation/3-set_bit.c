#include "main.h"

/**
 * set_bit  - a function that sets the value of a bit to 1 at a given index
 * @n: said number
 * @index: index is the index, starting from 0 of the bit you want to set
 *
 * Return: 1 if it worked, or -1 if an error occurred
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned int num_num = sizeof(n) * 8;
	unsigned long int mass = 1UL << index;

	if (index >= num_num)
		return (-1);

	*n |= mass;

	return (1);
}
