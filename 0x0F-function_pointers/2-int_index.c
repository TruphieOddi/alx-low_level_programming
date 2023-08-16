#include "function_pointers.h"

/**
 * int_index - returns  index when true, -1 if false
 * @array: said array
 * @size: number of elements in array
 * @cmp: pointer to the function used
 *
 * Return: 0
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int a;

	if (size <= 0)
		return (-1);

	for (a = 0; a < size; a++)
	{
		if (cmp(array[a]))
			return (a);
	}
	return (-1);
}
