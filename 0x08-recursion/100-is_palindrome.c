#include "main.h"

/**
  * getLength - calculate the length of a string
  * @s: The pointer to the string
  *
  * Return: the length of the strength
  */
int getLength(char *s)
{
	if (!s)
		return (0);
	if (*s != '\0')
	{
		return (1 + getLength(s + 1));
	}
	return (0);
}

/**
 * palindrome_helper - recursively check if a string is a palindrome
 * @s: The pointer to the string
 * @i: The index of the string starting point
 * @j: The index of the string end, just before string terminator
 *
 * Return: (1) if @s is a palindrome, (0) if @s is not palindrome
 */
int palindrome_helper(char *s, int i, int j)
{
	if (i > j)
		return (1);
	if (*(s + i) == *(s + j))
	{
		i++;
		j--;
		return (palindrome_helper(s, i, j));
	}
	return (0);
}

/**
  * is_palindrome - Checks if a string is a palindrome
  * @s: The string
  *
  * Return: (1) if @s is a palindrome, (0) if @s is not a palindrome
  */
int is_palindrome(char *s)
{
	int i, j;

	i = 0;
	j = getLength(s) - 1;

	if (j < 0)
		return (0);
	if (j == 0)
		return (1);
	return (palindrome_helper(s, i, j));
}
