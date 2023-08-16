#include "function_pointers.h"
#include <stdio.h>

/**
 * array_iterator - prints array based on set parameter
 * @array: said array
 * @size: array size
 * @action: pointer to needed function
 *
 * Return: void
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int u;

	if (array == NULL || action == NULL)
		return;

	for (u = 0; u < size; u++)
	{
		action(array[u]);
	}
}
