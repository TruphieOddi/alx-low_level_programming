#include "main.h"

/**
 * _strstr - returns pointer to first poccurence of s2 to s1
 * @haystack: input
 * @needle: input
 *
 * Return: Always 0 - success
 */
char *_strstr(char *haystack, char *needle)
{
	for (; *haystack != '\0'; haystack++)
	{
		char *i = haystack;
		char *j = needle;

		while (*i == *j && *j != '\0')
		{
			i++;
			j++;
		}

		if (*j == '\0')
			return (haystack);
	}

	return (0);
}
