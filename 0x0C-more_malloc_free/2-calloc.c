#include <stdlib.h>
#include "main.h"

/**
 ** _memset - sets memory to 0 bytes
 *@m: where c will be stored
 *@c: char to copy
 *@n: number of times to copy c
 *
 *Return: pointer to m
 */
char *_memset(char *m, char c, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		m[i] = c;
	}

	return (m);
}

/**
 ** _calloc - a function that allocates memory for an array
 *@nmemb: elements in the array
 *@size: size of each element
 *
 * Return: a pointer to the allocated memory.
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *ccc;

	if (nmemb == 0 || size == 0)
		return (NULL);

	ccc = malloc(size * nmemb);

	if (ccc == NULL)
		return (NULL);

	_memset(ccc, 0, nmemb * size);

	return (ccc);
}
