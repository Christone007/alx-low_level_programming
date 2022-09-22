#include "main.h"

/**
 * _atoi - Convert a string to an integer
 * @s: A pointer to the string
 *
 * Return: The int value of s
 */
int _atoi(char *s)
{
	unsigned int pos, neg;
	char *num;
	unsigned int num2;

	pos = 0;
	neg = 0;
	/*Iterate through the elements of the string*/
	/*count the signs*/

	while (*s < '0' || *s > '9')
	{
		if (*s == '+')
		{
			pos++;
		}
		if (*s == '-')
		{
			neg++;
		}
		s++;
	}
	num = s;
	num2 = *num - '0';
	num++;

	/*Fetch the digits with sign correction*/
	while (*num >= '0' && *num <= '9')
	{
		num2 = (num2 * 10) + (*num - '0');
		num++;
	}
	if (neg > pos)
	{
		num2 *= -1;
	}

	return (num2);
}
