#include "3-calc.h"

/**
 * main - The Calculator entry point
 * @argc: The Argument Count
 * @argv: The Argument Vector
 *
 * Return: 0 (Success), other number if error
 */
int main(int argc, char *argv[])
{
	int a, b;
	int (*calc)(int, int);

/**
*	int i;
*	i = 0;
*	while (i < argc)
*	{
*		printf("Argv[%d] is %s\n", i, argv[i]);
*		i++;
*	}
*/
	if (argc != 4)
	{
		printf("Error\n");
		return (98);
	}

	if (*argv[2] == "."[0] || strlen(argv[2]) != 1)
	{
		printf("Error\n");
		return (99);
	}

	a = atoi(argv[1]);
	b = atoi(argv[3]);

	calc = get_op_func(argv[2]);
	printf("%d\n", calc(a, b));

	return (0);
}
