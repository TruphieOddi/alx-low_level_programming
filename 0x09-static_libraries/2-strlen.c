#include "main.h"

/**
 * _strlen - returns lenth of a string
 * @s: string
 *
 * Return: said length
 */
int _strlen(char *s)
{
	int leng = 0;

	while (*s != '\0')
	{
		leng++;
		s++;
	}

	return (leng);
}
