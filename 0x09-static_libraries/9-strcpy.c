#include "main.h"

/**
 * char *_strcpy - copies the string pointed by src to dest
 * @dest: where to copy
 * @src: where to copy from
 *
 * Return: string copied
 */
char *_strcpy(char *dest, char *src)
{
	int i = 0;
	int j = 0;

	while (*(src + i) != '\0')
	{
		i++;
	}
	for ( ; j < i ; j++)
	{
		dest[j] = src[j];
	}
	dest[i] - '\0';
	return (dest);
}
