#include "main.h"

/**
 * _strcpy - Creates a copy of a string
 * @str: The string to be copied
 * 
 * Return: A pointer to a copy of @str
 */
char *_strcpy(char *str)
{
	unsigned int i = 0;
	char *newstr;

	while (str[i] != '\0')
	{
		i++;
	}
	newstr = malloc(sizeof(char) * (i + 1));

	i = 0;
	while (str[i] != '\0')
	{
		newstr[i] = str[i];
		i++;
	}
	newstr[i] = '\0';

	return (newstr);
}

/**
 * str_len - Calculate the length of a string
 * @str: The string
 *
 * Return: The length, or 0
 */
unsigned int str_len(const char *str)
{
	unsigned int i = 0;

	if (str == NULL)
		return (-1);

	while (str[i] != '\0')
	{
		i++;
	}

	return (i);
}


/**
 * count_char - Counts the number of occurence of a char in a string
 * @str: The string
 * @c: The char to count
 *
 * Return: Number of @c found in @str
 */
int count_char(char *str, char c)
{
	int count = 0, i = 0;

	while (str[i] != '\0')
	{
		if (str[i] == c)
			count++;

		i++;
	}

	return (count);
}


/**
 * build_str - builds a new string using characters between two points in a string
 * @str: The Base string
 * @start_pt: The starting character
 * @end_pt: The last character
 *
 * Return: The new string;
 */
char *build_str(char *str, unsigned int start_pt, unsigned int end_pt)
{
	char *newstr;
	int i = 0, j;

	j = (end_pt - start_pt) + 2;

	newstr = malloc(sizeof(char) * j);
	
	while (start_pt <= end_pt)
	{
		newstr[i] = str[start_pt];
		i++;
		start_pt++;
	}

	newstr[i] = '\0';

	return (newstr);
}


/**
 * split_str - Splits a string into an array using the specified delimeter
 * @str: The string to split
 * @delim: The delimeter to split by
 *
 * Return: NULL terminated Array of strings
 */
char **split_str(char *str, char delim)
{
	char **string_arr, *newstr;
	unsigned int delim_count = 0, i = 0, k, start_pt, end_pt;

	delim_count = count_char(str, delim);

	string_arr = malloc(sizeof(char *) * (delim_count + 2));

	k = 0;
	while (str[i] != '\0')
	{
		if (str[i] != delim)
		{
			start_pt = i;
			while (str[i + 1] != delim)
			{
				if (str[i + 1] == '\0')
					break;
				i++;
			}
			end_pt = i;

			/*Create string using start and end_pts*/
			newstr = build_str(str, start_pt, end_pt);

			/*Add the string to the array*/
			string_arr[k] = newstr;
			k++;
		}
		i++;
	}

	string_arr[k] = NULL;

	return (string_arr);
}

/**
 * str_concat_char - Concatenates two strings with a character between them
 * @str1: The first string
 * @c: The character to be placed between them
 * @str2: The second string
 *
 * Return: A new string
 */
char *str_concat_char(const char *str1, char c, const char *str2)
{
	char *new_string;
	unsigned int str1_len, str2_len, i = 0, j = 0;

	str1_len = str_len(str1);
	str2_len = str_len(str2);

	new_string = malloc(sizeof(char) * (str1_len + str2_len + 2));
	if (new_string == NULL)
	{
		return (NULL);
	}

	while (str1[i] != '\0')
	{
		new_string[i] = str1[i];
		i++;
	}

	new_string[i] = c;
	i++;

	while (str2[j] != '\0')
	{
		new_string[i + j] = str2[j];
		j++;
	}

	new_string[i + j] = '\0';

	return (new_string);
}
