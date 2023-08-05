#include <stdio.h>
#include "main.h"

/**
 * _atoi -  multiplies two numbers and prints all arguments received
 * @s: string to be converted
 *
 * Return: integer coverted from string.
 */
int _atoi(char *s)
{
	int i, j, k, l, m, o;

	i = 0;
	j = 0;
	k = 0;
	l = 0;
	m = 0;
	o = 0;

	while (s[l] != '\0')
		l++;

	while (i < l && m == 0)
	{
		if (s[i] == '-')
			++j;

		if (s[i] >= '0' && s[i] <= '9')
		{
			o = s[i] - '0';
			if (j % 2)
				o = -o;
			k = k * 10 + o;
			m = 1;
			if (s[i + 1] < '0' || s[i + 1] > '9')
				break;
			m = 0;
		}
		i++;
	}

	if (m == 0)
		return (0);

	return (k);
}

/**
 * main - multiplies two numbers \n
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return: 0 (Success), 1 (Error)
 */
int main(int argc, char *argv[])
{
	int result, num1, num2;

	if (argc < 3 || argc > 3)
	{
		printf("Error\n");
		return (1);
	}

	num1 = _atoi(argv[1]);
	num2 = _atoi(argv[2]);
	result = num1 * num2;

	printf("%d\n", result);

	return (0);
}

