#include "3-calc.h"

int op_add(int a, int b);
int op_sub(int a, int b);
int op_mul(int a, int b);
int op_div(int a, int b);
int op_mod(int a, int b);

/**
 * op_add - Returns sum of a & b
 * @a: 1st number
 * @b: 2nd number
 *
 * Return: sum of a+b
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - Returns the difference between two numbers
 * @a: 1st number
 * @b: 2nd number
 *
 * Return: difference a-b
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - Returns the product of two numbers
 * @a: 1st number
 * @b: 2nd number
 *
 * Return: product a*b
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - Returns the result of division of two numbers
 * @a: 1st number
 * @b: 2nd number
 *
 * Return: quotient a/b
 */
int op_div(int a, int b)
{
	return (a / b);
}

/**
 * op_mod - Returns the reminder after division
 * @a: 1st number
 * @b: 2nd number
 *
 * Return: reminder of a%b
 */
int op_mod(int a, int b)
{
	return (a % b);
}
