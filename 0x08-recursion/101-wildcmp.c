#include "main.h"

/**
  * wildcmp - Compare a string to a pattern
  * @s1: The string to compare
  * @s2: The string pattern to compare it to, includes wildcards
  *
  * Return: (1) if match and (0) if no match
  */
int wildcmp(char *s1, char *s2)
{
	if (*s2 == '*' && *(s2 + 1) != '\0' && *s1 == '\0')
		return (0);
	if (*s1 == '\0' && *s2 == '\0')
		return (1);
	if (*s1 == *s2)
		return (wildcmp(s1 + 1, s2 + 1));
	if (*s2 == '*')
		return (wildcmp(s1, s2 + 1) || wildcmp(s1 + 1, s2));
	return (0);
}
