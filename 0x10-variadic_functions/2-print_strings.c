#include "variadic_functions.h"

/**
 * print_strings - Prints strings
 * @separator: The string seperator
 * @n: The number of string variables
 *
 * Return: Nothing
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list ap;
	unsigned int count;
	char *str;

	va_start(ap, n);

	for (count = 0; count < n; count++)
	{
		str = va_arg(ap, char *);
		if (str == NULL)
			str = "(nil)";
		printf("%s", str);

		if (count + 1 != n && separator != NULL)
			printf("%s", separator);
	}
	printf("\n");
	va_end(ap);
}
