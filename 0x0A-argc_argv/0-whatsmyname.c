#include <stdio.h>
#include "main.h"

/**
 * main - prints name of program \n
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return: sucess - Always 0
 */
int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", *argv);

	return (0);
}
