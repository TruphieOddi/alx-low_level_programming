#include "main.h"

/**
 * _strncat - links/concatenate two strings to a max of n bytes from src
 * @dest: inputted value
 * @src: inputted value
 * @n: inputted value
 *
 * Return: pointer to dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int j;
	int k;

	j = 0;
	while (dest[j] != '\0')
	{
		j++;
	}
	k = 0;
	while (k < n && src[k] != '\0')
	{
	dest[j] = src[k];
	j++;
	k++;
	}
	dest[j] = '\0';
	return (dest);
}
