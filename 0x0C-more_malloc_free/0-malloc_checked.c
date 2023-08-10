#include <stdlib.h>
#include "main.h"

/**
 * *malloc_checked - checks whethere memory has been allocated successfully
 * @b: number of bytes to be allocated
 *
 * Return: the pointer to the allocated memory
 */
void *malloc_checked(unsigned int b)
{
	void *loc = malloc(b);

	if (loc == NULL)
		exit(98);
	else
	{

	return (loc);

	}
}
