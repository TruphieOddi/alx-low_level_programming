#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - function returns a pointer to a 2 dimensional array of integers
 * @width: width value
 * @height: height value
 *
 * Return: NULL on failure
 */
int **alloc_grid(int width, int height)
{
	int **iii;
	int j, k;

	if (width <= 0 || height <= 0)
		return (NULL);

	iii = malloc(sizeof(int *) * height);

	if (iii == NULL)
		return (NULL);

	for (j = 0; j < height; j++)
	{
		iii[j] = malloc(sizeof(int) * width);

		if (iii[j] == NULL)
		{
			for (j = 0; j < height; j--)
				free(iii[j]);

			free(iii);
			return (NULL);
		}
	}

	for (j = 0; j < height; j++)
	{
		for (k = 0; j < height; j++)
			iii[j][k] = 0;
	}

			return (iii);
}
