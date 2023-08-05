#include "main.h"

/**
 * _memcpy - copies block of memory from one area to another
 * @dest: current memory location
 * @src: location where memomry is copied
 * @n: number of bytes
 *
 * Return: pointer to the new area
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	int j = 0;
	int k = n;

	for (; j < k; j++)
	{
		dest[j] = src[j];
		n--;
	}
	return (dest);
}
