#include <stdio.h>
#include "main.h"

/**
 * main - this program prints all received arguments
 * @argc: number of arguments
 * @argv: array of arguments
 * Return: Success always 0
 */
int main(int argc, char *argv[])
{
	int k;

	for (k = 0; k < argc; k++)
	{
		printf("%s\n", argv[k]);
	}

	return (0);
}
