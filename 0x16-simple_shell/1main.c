#include "split.h"

/**
 * main - Entry point
 *
 */
int main(void)
{
	char **arr;
	int i = 0;
	char *mystr = "This is/ a new string";

	arr = split_str(mystr, '/');

	while (arr[i] != NULL)
	{
		printf("arr[%d] => %s\n", i, arr[i]);
		i++;
	}

	return (0);
}
