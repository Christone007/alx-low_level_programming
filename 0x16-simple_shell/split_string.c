#include <stdio.h>
#include <stdlib.h>

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
 * build_str - builds a string using characters between two points in a string
 * @str: The string
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
 * split_str - Splits a string using the specified delimeter
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
