#include "main.h"

/**
 * get_endianness - Checks the endianness of the running system
 *
 * Return: 0 if big endian, 1 if little endian
 */
int get_endianness(void)
{
	int n;
	char *ptr = (char *)&n;

	n = 1;

	if (*ptr == 1)
		return (1);
	return (0);
}
