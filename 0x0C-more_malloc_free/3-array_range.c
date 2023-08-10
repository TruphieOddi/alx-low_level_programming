#include <stdlib.h>
#include "main.h"

/**
 **array_range - an array of integers is arranged by this function
 *@min: least range of values stored
 *@max: largest range of values
 *
 * Return: the new array's pointer
 */
int *array_range(int min, int max)
{
	int *arr;
	int a, b;

	if (min > max)
		return (NULL);

	b = max - min + 1;

	arr = malloc(sizeof(int) * b);

	if (arr == NULL)
		return (NULL);

	for (a = 0; min <= max; a++)
		arr[a] = min++;

	return (arr);
}
