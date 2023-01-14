#include "htable_header.c"


/**
 * create_overflow_buckets - Creates an overflow bucket
 * @table: The Hashtable to creates buckets for
 *
 * Description: Overflow buckets are an array of linked lists
 * Return: an array of linked lists
 */
LinkedList** create_overflow_buckets(HashTable* table)
{
	LinkedList** buckets = calloc(table->size, sizeof(LinkedList*));
	for (int i = 0; i < table->size; i++)
		buckets[i] = NULL;

	return buckets;
}


/**
 * free_overflow_buckets - Frees all the overflow bucket lists
 * @table: The hashtable
 *
 * Return: void
 */
void free_overflow_buckets(HashTable* table)
{
	LinkedList** buckets = table->overflow_buckets;
	for (int i = 0; i < table->size; i++)
	{
		free_linkedlist(buckets[i]);
	}

	free(buckets);
}


