#include "htable_header.h"


//Hash Function
/**
 * hash_function - Generates an index using a string key
 * @str: The key
 *
 * Returns: An index
 */
unsigned long hash_function(char *str)
{
	unsigned long i = 0;
	for (int j = 0; str[j]; j++)
		i += str[j];
	return i % CAPACITY;
}
