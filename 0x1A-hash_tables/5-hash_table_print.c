#include "hash_tables.h"


/**
 * hash_table_print - Print a hash table
 * @ht: A pointer to the hash table to print
 *
 * Return: void
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int index = 0;
	hash_node_t *current;
	int empty = 0;

	if (ht == NULL)
		return;

	printf("{");
	while (index < ht->size)
	{
		current = ht->array[index];

		if (current != NULL)
		{
			if (empty == 1)
				printf(", ");
			printf("'%s': '%s'", current->key, current->value);
			empty = 1;
		}

		index++;
	}
	printf("}\n");
}
