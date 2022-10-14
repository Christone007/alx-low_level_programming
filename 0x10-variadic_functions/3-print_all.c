#include "variadic_functions.h"

/**
 * print_all - Print all arguments
 * @format: String specifying printing format
 * @...: unkown arguments
 *
 * Return: void
 */
void print_all(const char * const format, ...)
{
	unsigned int i, flag;
	va_list ap;
	char *strtmp;

	va_start(ap, format);
	i = 0;
	while (format && format[i])
	{
		flag = 0;
		switch (format[i])
		{
			case 'c':
				printf("%c", va_arg(ap, int));
				flag = 1;
				break;
			case 'i':
				printf("%d", va_arg(ap, int));
				flag = 1;
				break;
			case 'f':
				printf("%f", va_arg(ap, double));
				flag = 1;
				break;
			case 's':
				strtmp = va_arg(ap, char *);
				if (strtmp == NULL)
				{
					printf("(nil)");
					flag = 1;
					break;
				}
				printf("%s", strtmp);
				flag = 1;
				break;
		}
		if (flag == 1 && format[i + 1])
			printf(", ");
		i++;
	}
	printf("\n");
}
