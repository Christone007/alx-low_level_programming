#include "variadic_functions.h"

/**
 * print_numbers - Prints numbers
 * @seperator: A pointer to the seperator to be used
 * @n: The number of numbers passed
 *
 * Return: Nothing
 */
void print_numbers(const char *seperator, const unsigned int n, ...)
{
	va_list ap;
	unsigned int count;

	if (!n || n == 0)
		return;

	va_start(ap, n);

	for (count = 0; count < n; count++)
	{
		printf("%d", va_arg(ap, unsigned int));

		if (count + 1 != n && seperator != NULL)
			printf("%s", seperator);
	}
	va_end(ap);
	printf("\n");
}
