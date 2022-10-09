#include "main.h"

/**
 * set_string - sets the value of a pointer to a char
 * @s: The pointer whose value is to be passed
 * @to: The char to hold the value
 *
 * Return: void
 */
void set_string(char **s, char *to)
{
	 *s = to;
}
