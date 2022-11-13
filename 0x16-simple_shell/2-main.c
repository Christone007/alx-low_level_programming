#include "main.h"

int main(void)
{
	char *pathvalue;
	char **path_dir_arr;
	list_t *directory_list, *ptr;
	int i = 0;

	/*Get the PATH env varable value*/
	pathvalue = _getenv("PATH");
	printf("PATHVALUE=> %s\n", pathvalue);

	/*Create an array of the path directories*/
	path_dir_arr = split_str(pathvalue, '/');

	printf("\nPRINTING ARRAY\n");
	while (path_dir_arr[i] != NULL)
	{
		printf("[%d] -> %s\n", i, path_dir_arr[i]);
		i++;
	}

	/*Use array to build a linked list of path directories*/
	directory_list = build_linked_list(path_dir_arr);

	printf("\nPRINTING A LINKED LIST\n");
	/*Print linked list*/
	ptr = directory_list;

	while(ptr)
	{
		printf("%s => ", ptr->dir);
		ptr = ptr->next;
	}

	printf("\n");
	return (0);
}
