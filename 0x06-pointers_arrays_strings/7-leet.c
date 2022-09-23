#include "main.h"

/**
 * leet - Encode string to 1337
 * @s: A pointer to the string to encode
 *
 * Return: a char pointer to @s
 */
char *leet(char *s)
{
	int i, j;
	char arr1[6] = "aeotl";
	char arr2[6] = "AEOTL";
	char arr3[6] = "43071";

	i = 0;
	while (s[i] != '\0')
	{
		/*Now I have the current character*/
		/*Compare it against all the search characters*/
		for (j = 0; j < 5; j++)
		{
			if (s[i] == arr1[j] || s[i] == arr2[j])
			{
				s[i] = arr3[j];
			}
		}
		i++;
	}
	return (s);
}
