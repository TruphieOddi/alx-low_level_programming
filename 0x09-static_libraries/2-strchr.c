#include "main.h"

/**
 * _strchr - finds first entry point of a char in the original string
 * @s: input
 * @c: input
 *
 * Return: Always 0 - success
 */
char *_strchr(char *s, char c)
{
	int i = 0;

	for (; s[i] >= '\0'; i++)
	{
		if (s[i] == c)
			return (&s[i]);
	}

	return (0);
}
