#include <stdlib.h>
#include "main.h"

/**
 * *string_nconcat - links two strings
 * @s1: where s2 will be added
 * @s2: the string to link from
 * @n: number of bytes linked from s2 to s1
 *
 * Return: pointer to the new string
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *str;
	unsigned int j = 0, k = 0, l1 = 0, l2 = 0;

	while (s1 && s1[l1])
		l1++;
	while (s2 && s2[l2])
		l2++;

	if (n < l2)
		str = malloc(sizeof(char) * (l1 + n + 1));
	else
		str = malloc(sizeof(char) * (l1 + l2 + 1));
	if (!str)
		return (NULL);
	while (j < l1)
	{
		str[j] = s1[j];
		j++;
	}

	while (n < l2 && j < (l1 + n))
		str[j++] = s2[k++];
	while (n >= l2 && j < (l1 + l2))
		str[j++] = s2[k++];

	str[j] = '\0';

	return (str);
}
