#include "main.h"
#include <stdlib.h>
/**
 * str_concat - functions that concatenates two strings
 * @s1: 1st input to link
 * @s2: 2nd input to link
 *
 * Return: pointer to new allocated space of s1 then s2
 */
char *str_concat(char *s1, char *s2)
{
	char *link;
	int i, j;

	if (s1 == NULL)
		s1 = "";

	i = j = 0;
	while (s1[i] != '\0')
		i++;
	while (s2[j] != '\0')
		j++;
	link = malloc(sizeof(char) * (i + j + 1));

	if (link == NULL)
		return (NULL);
	i = j = 0;
	while (s1[i] != '\0')
	{
		link[i] = s1[i];
		i++;
	}

	while (s2[j] != '\0')
	{
		link[i] = s2[j];
		i++, j++;
	}
	link[i] = '\0';
	return (link);
}
