#include "main.h"

/**
  *
  *
  *
  */
int wildcmp(char *s1, char *s2)
{
	static int wild = 1;
	/*we reach end of s1, and s2 is not a wildcard.
	  if its also end of s2, then match, otherwise,
	  no match*/
	if ((*s1 == '\0') && (*s2 != '*'))
	{
		if (*s2 == '\0')
		{
			return (1);
		}
		return (0);
	}
	/*If the s2 ends with a wildcard, then there
	 is a match irrespective of the location of s1,
	 if its not end of s2, then move s2 forward*/
	if (*s2 == '*')
	{
		wild = 2;
		if (*(s2 + 1) == '\0')
		{
			return (1);
		}
		if (*(s2 + 1) != '*')
				return (wildcmp(s1 + 1, s2 + 1));
		return (wildcmp(s1, s2 + 1));
	}
	/*When s2 is not a wildcard, lets ...*/
	if (*s2 != '*')
	{
		/*check if s1 matches s2, if it does...*/
		if (*s1 == *s2)
		{
/*
			   Then check if these are the last chars,
			 in which case its a match; if not, move
			 both s1 and s2 forward
*/
			if ((*(s1 + 1) == '\0') && (*(s2 + 1) == '\0'))
			{
				return (1);
			}
			if (*(s2 + 1) != '*')
			{
				if (*(s1 + 1) != *(s2 + 1))
				{
					if (wild == 2)
						return (wildcmp(s1 + 1, s2));
					return (0);
				}
				else
					return (wildcmp(s1 + 1, s2 + 1));
			}
			return (wildcmp(s1, s2 + 1));
		}
		else if (*s2 == '\0')
		{
			return (0);
		}
		/*check if this is the last of s1 and is still != s2*/
		else if ((*s1 != *s2) && (*(s1 + 1) == '\0'))
		{
			return (0);
		}
		/*if its not the last value of s1, then there is still
		 hope for a match, move s1 forward*/
		else if (*s1 != *s2)
		{
			return (wildcmp(s1 + 1, s2));
		}
	}
	return (2);
}
