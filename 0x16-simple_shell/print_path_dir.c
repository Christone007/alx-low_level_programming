#include "main.h"

/**
 * print_path_dir - Prints all the directories in environment PATH Variable
 * 
 * Return: void
 */
void print_path_dir()
{
	char *path;
	char **arr_of_dir;
	unsigned int i = 0;

	path = _getenv("PATH");

	arr_of_dir = split_str(path, '/');

	while (arr_of_dir[i] != NULL)
	{
		printf("%s\n", arr_of_dir[i]);
		i++;
	}

	return;
}
