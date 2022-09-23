#include "main.h"

/**
 * _capitalize - capitalize a character
 * @c: The character to be capitalized
 *
 * Desciption: Checks if a character is lowercase,
 * then caitalizes it
 *
 * Return: The capitalized character
 */
char _capitalize(char c)
{
	int temp;

	if (c >= 'a' && c <= 'z')
	{
		temp = c - '0';
		temp -= 32;
		c = temp + '0';
	}
		return (c);
}

/**
 * cap_string - Capitalize all words
 * @s: A pointer to the text whose words should be capitalized
 *
 * Return: a char pointer
 */
char *cap_string(char *s)
{
	unsigned int i, j;

	char symbols[] = " ,;.!?\"(){}";

	i = 0;
	while (s[i] != '\0')
	{
		if (i == 0)
		{
			s[i] = _capitalize(s[i]);
		}

		if (s[i] == '\n')
		{
			s[i + 1] = _capitalize(s[i + 1]);
		}

		if (s[i] == '\t')
		{
			/*s[i] = ' ';*/
			s[i + 1] = _capitalize(s[i + 1]);
		}

		j = 0;
		while (symbols[j] != '\0')
		{
			if (s[i] == symbols[j])
			{
				s[i + 1] = _capitalize(s[i + 1]);
			}
			j++;
		}
		i++;
	}

	return (s);
}
