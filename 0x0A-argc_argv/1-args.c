#include <stdio.h>
#include "main.h"

/**
 * main - a program that prints all received arguments
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return: success always 0
 */
int main(int argc, char *argv[])
{
(void) argv; /*Ignore argv*/
	printf("%d\n", argc - 1);

	return (0);
}
