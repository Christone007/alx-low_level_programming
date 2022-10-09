#include "main.h"

/**
 * cword - Count the number of space seperated words in a string
 * @s: Pointer to the string
 *
 * Return: The number of words in the string
 */
unsigned int cword(char *s)
{
	unsigned int wc, i;

	wc = 0;
	i = 0;
	while (s[i] != '\0')
	{
		if (s[i] != ' ')
		{
			if (s[i + 1] == ' ' || s[i + 1] == '\0')
			{
				wc++;
			}
		}
		i++;
	}
	return (wc);
}

/**
 * memword - Allocates memory to hold each word
 * @p: A pointer to the array of strings
 * @s: The pointer to the original string
 *
 * Description: Allocates enough memory space to hold
 * words which are directly split out from a string.
 * The address of each word memory allocation is saved
 * to the array
 *
 * Return: A Pointer to an array of string memory,
 * not yet initialized. NULL if error
 */
char **memword(char **p, char *s)
{
	unsigned int i, wordlen;
	long int j;

	i = 0;
	j = 0;
	wordlen = 0;
	while (s[i] != '\0')
	{
		if (s[i] != ' ')
		{
			wordlen++;

			if (s[i + 1] == ' ' || s[i + 1] == '\0')
			{
				p[j] = malloc(sizeof(char) * (wordlen + 1));
				wordlen = 0;
				if (p[j] == NULL)
				{
					while (j >= 0)
					{
						free(p[j]);
						j--;
					}
					return (NULL);
				}
				j++;
			}
		}
		i++;

	}
	return (p);
}

/**
 * wstr - Writes words into allocated memory by selecting words from a string
 * @str: The string to take the words from
 * @wc: The number of space-seperated words in the string
 * @ptr: A pointer to an array of strings which would hold the words
 *
 * Description: The words are culled out of a string and used
 * to populate already-allocated memory spaces in @ptr
 *
 * Return: A pointer to the array of strings. NULL on error of failure
 */
char **wstr(char *str, unsigned int wc, char **ptr)
{
	unsigned int i, j, k;

	i = 0;
	j = 0;
	k = 0;
	while (i < wc)
	{
		k = 0;
		while (str[j] != '\0')
		{
			if (str[j] != ' ')
			{
				ptr[i][k] = str[j];

				if (str[j + 1] == ' ' || str[j + 1] == '\0')
				{
					k++;
					j++;
					ptr[i][k] = '\0';
					i++;
					break;
				}
				k++;
			}
			j++;
		}
	}
	ptr[i] = NULL;

	return (ptr);
}

/**
 * strtow - Splits a string into words
 * @str: The string to split
 *
 * Return: A pointer to an array of strings
 */
char **strtow(char *str)
{
	/*Variable declaration*/
	unsigned int wc;
	char **ptr;

	/*initial validation*/
	if (str == NULL || *str == '\0')
		return (NULL);
	/*Count the words in the string*/
	wc = cword(str);
	if (wc == 0)
		return (NULL);

	/*Allocate memory to hold the words*/
	ptr = malloc(sizeof(char *) * (wc + 1));
	if (ptr == NULL)
		return (NULL);


	/*Allocate memory for the chars of each word*/
	ptr = memword(ptr, str);

	/*Copy the words*/
	ptr = wstr(str, wc, ptr);

	/*return the array of strings*/
	return (ptr);
}
