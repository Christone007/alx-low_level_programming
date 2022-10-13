#include "3-calc.h"

/**
 * op_add - Adds two numbers
 * @a: The first number
 * @b: The second number
 *
 * Return: The sum of @a and @b
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - Subtraction of two numbers
 * @a: The first number
 * @b: The second number
 *
 * Return: The difference between @a and @b
 */
int op_sub(int a, int b)
{
		return (a - b);
}

/**
 * op_mul - Multiplies two numbers
 * @a: The first number
 * @b: The second number
 *
 * Return: The product of @a and @b
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - divides two numbers
 * @a: The first number
 * @b: The second number
 *
 * Return: The quotient of @a divide by @b
 */
int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a / b);
}

/**
 * op_mod - Get the remainder after a division
 * @a: The divided number
 * @b: The divider number
 *
 * Return: The remainder of a / b
 */
int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a % b);
}
