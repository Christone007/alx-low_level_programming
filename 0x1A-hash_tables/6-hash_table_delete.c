#include "hash_tables.h"


/**
 * hash_table_delete - Delete a Hash Table
 * @ht: A pointer to the hash table
 *
 * Return: void
 */
void hash_table_delete(hash_table_t *ht)
{
	hash_node_t *current_node;
	hash_node_t *temp;
	unsigned int index = 0;

	while (index < ht->size)
	{
		current_node = ht->array[index];
		/*Free all the nodes in the list saved at each index*/
		if (current_node != NULL)
		{
			while (current_node->next != NULL)
			{
				temp = current_node;
				temp = current_node->next;
				current_node->next = NULL;

				free(current_node->key);
				free(current_node->value);
				free(current_node);

				current_node = temp;
			}
			free(current_node->key);
			free(current_node->value);
			free(current_node);
		}
		index++;
	}

	free(ht->array);
	free(ht);
}
