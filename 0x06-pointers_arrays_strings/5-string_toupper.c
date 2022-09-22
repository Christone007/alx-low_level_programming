#include "main.h"

/**
 * string_toupper - Changes all lowercase letters of
 * a string to uppercase
 * @str: A char pointer to the string
 *
 * Return: a pointer to the string
 */
char *string_toupper(char *str)
{
	unsigned int i;
	int temp;

	i = 0;
	while (str[i] != '\0')
	{
		temp = 0;
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			temp = str[i] - '0';
			temp -= 32;
			str[i] = temp + '0';
		}
		i++;
	}
	return (str);

}
