#include "hash_tables.h"


/**
 * hash_table_get - Retrieve a value from a hash table
 * @ht: A pointer to the hash table
 * @key: The key of the data to find
 *
 * Return: the value stored with the given key
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int index;
	hash_node_t *target;

	if (ht == NULL)
		return (NULL);
	if (key == NULL)
		return (NULL);

	index = key_index((const unsigned char *)key, ht->size);
	target = ht->array[index];

	/*There is nothing here*/
	if (target == NULL)
		return (NULL);

	/*If the space is occupied, match key*/
	while (target != NULL)
	{
		if (strcmp(target->key, key) == 0)
			return (target->value);
		target = target->next;
	}

	return (NULL);
}
