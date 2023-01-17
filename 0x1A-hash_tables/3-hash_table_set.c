#include "hash_tables.h"


/**
 * hash_table_set - Add an element to the hash table
 * @ht: The hashtable to add to
 * @key: The key of the element to add
 * @value: The value of the element to add
 *
 * Return: 1 on Success. 0 otherwise
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index;
	hash_node_t *new_node;
	hash_node_t *current_node;
	int resolution_type;

	/*Check edge cases*/
	if (ht == NULL)
		return (0);
	if (key == NULL)
		return (0);

	/*Get index*/
	index = key_index((unsigned char *)key, ht->size);
	
	/*Create new node*/
	new_node = malloc(sizeof(hash_node_t));
	if (new_node == NULL)
		return (0);

	new_node->key = (char *)key;
	new_node->value = (char *)value;
	new_node->next = NULL;

	/*Get the node in that index*/
	current_node = ht->array[index];

	/*Virgin node*/
	if (current_node == NULL)
	{
		ht->array[index] = new_node;
		printf("Inserted a New node\n");
		return (1);
	}

	/*Not virgin node*/
	else
	{
		/*Update value*/
		if (strcmp(current_node->key, key) == 0)
		{
			current_node->value = (char *)value;
			printf("\n\nUpdated the node with key: %s\n", key);
			return (1);
		}
		else
		{
			/*chain new value or update chained value*/
			resolution_type = resolve_collision(current_node, new_node);
			if (resolution_type == 2)
				printf("\n\nUpdated a chained node\n");
			if (resolution_type == 1)
				printf("\n\nChained a new node\n");

			return (1);
		}
	}

}


/**
 * resolve_collision - Resolve a collision in a hashmap
 * @current_node: The index node
 * @node: The new node to add
 *
 * Return: 1 if new node was chained. 2 if chained node was updated
 */
int resolve_collision(hash_node_t *current_node, hash_node_t *node)
{
	hash_node_t *prev_node;

	prev_node = NULL;

	while (current_node != NULL)
	{
		if (strcmp(current_node->key, node->key) == 0)
		{
			current_node->value = node->value;
			return (2);
		}
		prev_node = current_node;
		current_node = current_node->next;
	}

	prev_node->next = node;
	return (1);
}