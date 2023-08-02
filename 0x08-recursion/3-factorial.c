#include "main.h"

/**
 * Factorial - returns the factorial of a given number.
 * @n: said number to return the factorial form
 *
 * Return: factorial of n
 */
int factorial(int n)
{
	if (n < 0)
		return (0);
	if (n == 0)
		return (1);
	return (n * factorial(n - 1));
}
