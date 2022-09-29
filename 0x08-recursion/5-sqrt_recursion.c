#include "main.h"

/**
 * _sqrt_helper - help find the square root by division
 * @n: The number whose square root should be found
 * @d: The divider
 *
 * Return: The sqare root of @n, or -1 if @n is not a
 * perfect square
 */
int _sqrt_helper(int n, int d)
{
	if (d > n/2)
		return (-1);
	if (d * d == n)
		return (d);
	d++;
	return (_sqrt_helper(n, d));
}

/**
 * _sqrt_recursion - Find the square root of a number
 * @n: The number whose squre root is to be found
 *
 * Return: The square root of @n, or (-1) if @n is not
 a perfect square
 */
int _sqrt_recursion(int n)
{
	int d;
	d = 1;

	if (n < 1)
		return (-1);
	if (n == 1)
		return (1);
	
	return (_sqrt_helper(n, d));


}

