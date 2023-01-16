#include "hash_tables.h"


/**
 * key_index - Modifies a hash result to get an index
 * @key: The key to be hashed
 * @size: The size of the hashmap 
 *
 * Description: The index to be returned cannot be > 'size'
 *
 * Return: The index of a key
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int index = hash_djb2(key);

	index %= size;

	return (index);
}
