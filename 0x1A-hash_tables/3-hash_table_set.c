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

	/*Check edge cases*/
	if (ht == NULL)
		return (0);
	if (key == NULL)
		return (0);

	/*Get index and create new node*/
	index = key_index((unsigned char *)key, ht->size);
	new_node = create_node(key, value);

	/*Get the node in that index*/
	current_node = ht->array[index];

	if (current_node == NULL)
	{
		ht->array[index] = new_node;
		return (1);
	}

	/*Not virgin node*/
	else
	{
		/*Update value*/
		if (strcmp(current_node->key, key) == 0)
		{
			strcpy(current_node->value, value);
			free(new_node->key);
			free(new_node->value);
			free(new_node);
			return (1);
		}
		else
		{
			/*chain new value or update chained value*/
			resolve_collision(&(ht->array[index]), new_node);
			return (1);
		}
	}

}


/**
 * create_node - Creates a new node
 * @key: The key of the new node
 * @value: The value stored in the new node
 *
 * Return: A pointer to a new node
 */
hash_node_t *create_node(const char *key, const char *value)
{
	hash_node_t *new_node;

	/*Create new node*/
	new_node = malloc(sizeof(hash_node_t));
	if (new_node == NULL)
		return (0);

	new_node->key = malloc(strlen(key) + 1);
	if (new_node->key == NULL)
		return (0);

	new_node->value = malloc(strlen(value) + 1);
	if (new_node->value == NULL)
		return (0);

	strcpy(new_node->key, key);
	strcpy(new_node->value, value);

	new_node->next = NULL;

	return (new_node);
}

/**
 * resolve_collision - Resolve a collision in a hashmap
 * @current_node: The index node
 * @node: The new node to add
 *
 * Return: void
 */
void resolve_collision(hash_node_t **current_node, hash_node_t *node)
{
	hash_node_t *ptr;

	ptr = *current_node;

	while (ptr != NULL)
	{
		if (strcmp(ptr->key, node->key) == 0)
		{
			strcpy(ptr->value, node->value);
			free(node->key);
			free(node->value);
			free(node);
			return;
		}
		ptr = ptr->next;
	}

	node->next = (*current_node);
	(*current_node) = node;
}
