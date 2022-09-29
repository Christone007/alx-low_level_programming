#include "main.h"

/**
 * factorial - Calculate the factorial of a number
 * @n: The given number
 *
 * Return: int, factorial of n
 */
int factorial(int n)
{
	if(n < 0)
		return (-1);
	else if(n == 0)
		return (1);
	else
		return (n * factorial(n - 1));
}
