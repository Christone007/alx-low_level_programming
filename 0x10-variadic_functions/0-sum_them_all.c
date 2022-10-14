#include "variadic_functions.h"

/**
 * sum_them_all - Adds all the arguments of a variadic function
 * @n: The total number of arguments to add
 *
 * Return: The sum of the arguments, or 0 if no arguments
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list ap;
	int sum;
	unsigned int i;

	if (n == 0)
		return (0);

	va_start(ap, n);

	sum = 0;
	for (i = 0; i < n; i++)
	{
		sum += va_arg(ap, int);
	}

	return (sum);
}
