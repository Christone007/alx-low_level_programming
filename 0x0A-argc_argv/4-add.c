#include "main.h"

/**
 * main - Add two positive numbers
 * @argc: Argument count
 * @argv: Argument vector
 *
 * Return: 0 Success, 1 Error
 */
int main(int argc, char **argv)
{
	int i, j, m, sum, count;
	char *txt;

	sum = 0;
	count = argc;

	if (argc <= 1)
	{
		printf("0\n");
		return (0);
	}

	i = 1;
	while (argc > 1)
	{
		txt = argv[i];

		for (j = 0; *(txt + j) != '\0'; j++)
		{
			if ((*(txt + j) < '0') || (*(txt + j) > '9'))
			{
				printf("Error\n");
				return (1);
			}
		}
		i++;
		argc--;
	}

	m = 1;
	while (m < count)
	{
		sum += atoi(argv[m]);
		m++;
	}

	printf("%d\n", sum);
	return (0);
}
