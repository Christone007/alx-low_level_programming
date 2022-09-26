#include "main.h"

/**
 * getLength - get the length of a variable pointed to
 * @s: a pointer to the variable
 *
 * Return: The length of the variable c
 */
unsigned int getLength(char *s)
{
	int i;

	i = 0;
	while (s[i] != '\0')
	{
		i++;
	}

	return (i);
}

/**
 * infinite_add - Add two numbers irrespective of their length
 * and save sum in a provided buffer.
 * @n1: The first number
 * @n2: The second number
 * @r: The buffer to hold the result
 * @size_r: The size of the buffer in bytes
 *
 * Return: a pointer to the sum stored in the buffer or 0 if
 * the buffer is too small to hold sum
 */
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int n1_len;
	int n2_len;
	char *n1_end;
	char *n2_end;
	char sum;
	char carry;
	int res_len;

	char *res = r + size_r - 1;
	*res = 0;

	n1_len = getLength(n1);
	n2_len = getLength(n2);

	n1_end = n1 + n1_len;
	n2_end = n2 + n2_len;

	carry = 0;

	while ((n1_end > n1) || (n2_end > n2))
	{
		sum = ((n1_end > n1) ? *(--n1_end) : '0')
			+ ((n2_end > n2) ? *(--n2_end) : '0')
			+ carry - '0';

		carry = sum > '9';
		if (carry)
		{
			sum -= 10;
		}
		if (sum > '9')
		{
			sum = '0';
			carry = 1;
		}

		*(--res) = sum;
	}
	if (carry)
	{
		*(--res) = '1';
	}

	res_len = getLength(res);

	if (res_len > size_r - 1)
	{
		return (0);
	}

	return (res);
}
