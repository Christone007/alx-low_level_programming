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
				printf("Current_node: %s\n", current_node->key);
				free(current_node->key);
				free(current_node->value);
				free(current_node);
				printf("Inner Node delete\n");
				current_node = temp;
			}
			printf("Current_node: %s\n", current_node->key);
			free(current_node->key);
			free(current_node->value);
			free(current_node);
			printf("Node deleted\n");
		}

		index++;
	}

	free(ht->array);
	free(ht);
}
