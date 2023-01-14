#include "htable_header.h"

/**
 * create_item - Creates an item that can be inserted 
 * into the hashtable
 * @key: The key of the data to be inserted
 * @value: The value to be paired with the key
 *
 * Return: A pointer to the created Ht_item
 */
Ht_item* create_item(char* key, char* value) {
	Ht_item* item;

	item = malloc(sizeof(Ht_item));
	if (item == NULL)
		return NULL;

	item->key = malloc(strlen(key) + 1);
	if (item->key == NULL)
		return NULL;
	item->value = malloc(strlen(value) + 1);
	if (item->key == NULL)
		return NULL;

	strcpy(item->key, key);
	strcpy(item->value, value);

	return item;
}


/**
 * create_table - Creates a Hash Table with all indices set to NULL
 * @size: The size of the Hash Table, i.e number of buckets in it
 *
 * Return: Pointer to the new Hashtable
 */
HashTable* create_table(int size)
{
	HashTable* table = malloc(sizeof(HashTable));
	if (table == NULL)
		return NULL;

	table->size = size;
	table->count = 0;
	table->items =(Ht_item**) calloc(table->size, sizeof(Ht_item*));
	if (table->items == NULL)
		return NULL;

	for (int i = 0; i < table->size; i++)
		//set all buckets to NULL
		table->items[i] = NULL;

	table->overflow_buckets = create_overflow_buckets(table);

	return table;
}


/**
 * free_item - Frees up a table item
 * @item: A pointer to the item to free
 *
 * Return: void
 */
void free_item(Ht_item* item)
{
	free(item->key);
	free(item->value);
	free(item);
}

/**
 * free_table - Frees up a Hash table
 * @table: A pointer to the Hash Table to free
 *
 * Return: void
 */
void free_table(HashTable* table)
{
	for (int i = 0; i < table->size; i++)
	{
		Ht_item* item = table->items[i];
		if (item != NULL)
			free(item);
	}

	free_overflow_buckets(table);
	free(table->items);
	free(table);
}
