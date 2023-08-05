#include "main.h"

/**
 * _memset - a program that fills a block of memory with a specific valus
 * @s: starting address of the memory to be filled
 * @b: the value we want
 * @n: the number of bytes to be changed
 *
 * Return: updated array with a new value of - n bytes
 */
char *_memset(char *s, char b, unsigned int n)
{
	int i = 0;

	for (; n > 0; i++)
	{
		s[i] = b;
		n--;
	}
	return (s);
}
