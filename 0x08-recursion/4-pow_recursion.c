#include "main.h"

/**
 * _pow_recursion - Calculate value of x raised to power y
 * @x: The base number
 * @y: The power
 *
 * Return: The value of x raised to y or -1 if y < 0;
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	else if (y == 0)
		return (1);
	else
	{
		y--;
		return (x * _pow_recursion(x, y));
	}
}
