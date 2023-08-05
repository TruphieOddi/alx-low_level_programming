#include "main.h"

/**
 * _strncpy - copies up to n characters of a string from src to dest
 * @dest: inputted value
 * @src: inputted value
 * @n: inputted value
 *
 * Return: dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	i = 0;
	while (i < n && src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}

	return (dest);
}
