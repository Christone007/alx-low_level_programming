#include "main.h"

/**
 * cap_string - Capitalize all words
 * @s: A pointer to the text whose words should be capitalized
 *
 * Return: a char pointer
 */
char *cap_string(char *s)
{
	unsigned int i, j, temp;
	i = 0;
	j = 0;

	char wordstart[13];
       wordstart = {}; 

	while (s[i] != '\0')
	{
		while (wordstart[j] != '\0')
		{
			if (s[i] == wordstart[j])
			{
				if(s[i + 1] >= 'a' && s[i + 1] <= 'z')
				{
					temp = s[i + 1] - '0';
					temp -= 32;
					s[i + 1] = temp + '0';
				}
			}
			j++;
		}
		i++;
	}

	return s;
}
