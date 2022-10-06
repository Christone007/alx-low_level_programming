#include "main.h"

/**
 * getLength - Get string length
 * @s: The string
 *
 * Return: length of string
 */
int getLength(char *s)
{
	int i;

	i = 0;

	while (s[i] != '\0')
	{
		i++;
	}

	return (i);
}

/**
 * argstostr - Concatenates all the arguments of a program
 * @ac: The Argument count
 * @av: The Argument vector
 *
 * Return: a string concatenation of arguments
 */
char *argstostr(int ac, char **av)
{
	int i, j, k, len, tl;
	char *ptr;

	tl = 0;
	i = 0;

	if (ac == 0 || av == NULL)
		return (NULL);
	while (i < ac)
	{
		len = getLength(av[i]);
		tl = tl + len;
		i++;
	}


	ptr = malloc(sizeof(char) * (tl + 1));

	if (ptr == NULL)
		return (NULL);

	k = 0;
	i = 0;
	while (i < ac)
	{
		j = 0;
		while (av[i][j] != '\0')
		{
			ptr[k] = av[i][j];
			k++;
			j++;
		}
		ptr[k++] = '\n';
		i++;
	}
	return (ptr);
}
