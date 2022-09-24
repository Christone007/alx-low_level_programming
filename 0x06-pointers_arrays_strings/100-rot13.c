#include "main.h"

/**
 * rot13 - Encrypts a text using rot13
 * @s: The string to be encrypted
 *
 * Return: Pointer to the string
 */
char *rot13(char *s)
{
	char input[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char output[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";
	int i, j;

	i = 0;
	j = 0;
	while (s[i] != '\0')
	{
		if ((s[i] >= 'A' && s[i] <= 'Z') || (s[i] >= 'a' && s[i] <= 'z'))
		{
			j = 0;
			while (s[i] != input[j])
			{
				j++;
				continue;
			}
			s[i] = output[j];
		}
		i++;
	}
	return (s);
}
