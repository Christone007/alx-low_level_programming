#include "hash_tables.h"


/**
 * print_hash_table - Prints a Hash Table
 *
 *
 */
void print_hash_table(hash_table_t *ht)
{
	hash_node_t *curr;
	unsigned long int i = 0;

	printf("============\nHASH TABLE\n============\n");

	printf("%-7s| %-15s| %-15s\n----------------------------------\n", "Index", "Key", "Value");
	while(i < ht->size)
	{
		curr = ht->array[i];
		if (curr != NULL)
		{
			printf("%-7ld| %-15s| %-15s\n", i, curr->key, curr->value);
			if (curr->next != NULL)
			{
				while(curr->next != NULL)
				{
					printf("%7s| %s\t| %s\t\n","->", curr->next->key, curr->next->value);
					curr = curr->next;
				}
			}
		}

		i++;
	}

}
