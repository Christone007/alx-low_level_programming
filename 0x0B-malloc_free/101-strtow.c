#include "main.h"
#include <stdio.h>

/**
 * countword - Counts the words in a string
 * @s: The string
 *
 * Return: number of words
 */
int countword(char *s)
{
	int i, wc;

	wc = 0;
	i = 0;
	for(i = 0; s[i] != '\0'; i++)
	{
		if(s[i] != ' ')
		{
			if (s[i + 1] == ' ' || s[i + 1] == '\0')
			{
				wc++;
			}
		}
	}
	return (wc);
}

/**
 * strtow - Splits a string into words
 * @str: The string to split
 *
 * Return: A pointer to an array of strings(words), 
 * or NULL if failed
 */
char **strtow(char *str)
{
	int wc, lc, i, j, k;
	char **ptr1;

	wc = countword(str);

	/*printf("Word count: %d\n", wc);*/

	/*create memory for 3 string pointers*/
	ptr1 = malloc(sizeof(char *) * wc);


	/*printf("Allocated memory: %ld\n", sizeof(char *) * wc);*/
	/*Now let's populate each memory pointer with chars*/
	j = 0;
	i = 0;
	while (i < wc)
	{
		lc = 0;

		while (str[j] != '\0')
		{
			if(str[j] == ' ')
			{
				j++;
				continue;
			}

			/*printf("%c", str[j]);*/
			lc++;

			if(str[j + 1] == ' ' || str[j + 1] == '\0')
				{
					j++;
					/*printf("%d \n", lc);*/
					break;
				}
			j++;
		}
		/*printf("%d\n", lc);*/
		ptr1[i] = malloc(sizeof(char) * lc + 1);
		/*printf(": %ld bytes allocated for ptr1[%d]\n", (sizeof(char) * lc + 1), i);*/
		i++;
	}

	/*Populate the memory with values*/
	i = 0;
	j = 0;
	while (i < wc)
	{
		k = 0;
		while (str[j] != '\0')
		{
			if(str[j] == ' ')
			{
				j++;
				continue;
			}
			/*printf("%c\n", str[j]);*/
			ptr1[i][k] = str[j];
			k++;

			if (str[j + 1] == ' ' || str[j + 1] == '\0')
			{
				ptr1[i][j + 1] = '\0';
				j++;
				break;
			}
			j++;
		}
		/*printf("\nFinal point, moving to next word...\n");*/
		i++;
	}
	/*printf("Outside the wc loop");*/
	return ptr1;
}
