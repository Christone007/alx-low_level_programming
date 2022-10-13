#include "3-calc.h"

/**
 * get_op_func - Selects the correct function to call
 * @s: The operator
 *
 * Return: A pointer to the correct function
 */
int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};
	int i;

	i = 0;
	while (i < 6)
	{
		/*printf("Comparing %s with %s\n", s, ops[i].op);*/

		if (*s == ops[i].op[0])
		{
			/*printf("Inside if\n");*/
			return (ops[i].f);
		}
		i++;
		/*printf("After incr\n");*/
	}
	/*printf("Exiting loop\n");*/

	/*Invalid operator passed*/
	printf("Error\n");
	exit(99);
}
