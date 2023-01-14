#include "htable_header.h"

/**
 * handle_collision - Hanlde a collision
 * @table: The table
 * @item: The item to insert
 * @index: The index of collision
 *
 * Return: void
 */
void handle_collision(HashTable* table, unsigned long index, Ht_item* item)
{
	LinkedList* head = table->overflow_buckets[index];

	//If it is a first time collision, overflow bucket is empty
	if (head == NULL)
	{
		head = allocate_list();
		head->item = item;
		table->overflow_buckets[index] = head;

		return;
	}
	else
	{
		//Add to an existing overflow_bucket
		table->overflow_buckets[index] = linkedlist_insert(head, item);
		return;
	}
}


/**
 * ht_insert - Inserts a new hashtable item into the hash
 * table
 * @table: The table to insert into
 * @key: The key of the item to be inserted
 * @value: The value of the item to be inserted
 *
 * Return: void
 */
void ht_insert(HashTable* table, char* key, char* value)
{
	//create the item
	Ht_item* new_item = create_item(key, value);

	//get the items hash
	int index = hash_function(key);

	Ht_item* current_item = table->items[index];

	//if the index is not occupied, then insert item
	if (current_item == NULL)
	{
		//Key does not exist.
		if (table->count == table->size)
		{
			//Hash Table is Full
			printf("Insert Error: Hash Table is Full\n");
			free_item(new_item);
			return;
		}

		//insert the new_item
		table->items[index] = new_item;
		table->count++;
	}
	else
	{
		//Bucket is occupied!
		//check if it is occupied by same key
		if (strcmp(current_item->key, key) == 0)
		{
			//Key exists, update value
			strcpy(table->items[index]->value, value);
			return;
		}
		else
		{
			//occupied by a different key: COLLISION
			handle_collision(table, index, new_item);
			return;
		}
	}
}



/**
 * ht_search - Searches for an item in a hash table
 * @table: The table to search
 * @key: The key of the data to search for
 *
 * Return: The value of the item or NULL if not found
 */
char* ht_search(HashTable* table, char* key)
{
	int index = hash_function(key);

	Ht_item* current_item = table->items[index];
	LinkedList* head = table->overflow_buckets[index];

	while (current_item != NULL)
	{
		//check if the key is the same
		if (strcmp(current_item->key, key) == 0)
			return current_item->value;
		if (head == NULL)
			return NULL;

		//THERE MUST HAVE BEEN A COLLISION
		current_item = head->item;
		head = head->next;
	}
	return NULL;
}


/**
 * ht_delete - Deletes an item from a HashTable
 * @table: The HashTable
 * @key: The key of the item to delete
 *
 * Return: void
 */
void ht_delete(HashTable* table, char* key)
{
	int index = hash_function(key);

	Ht_item* item = table->items[index];

	LinkedList* head = table->overflow_buckets[index];

	if (item == NULL)
	{
		//bucket is empty, invalid key
		return;
	}
	else
	{
		if (head == NULL && strcmp(item->key, key) == 0)
		{
			//Overflow does not exist.
			//bucket contains the item, delete it
			table->items[index] = NULL;
			free_item(item);
			table->count--;
			return;
		}
		else if (head != NULL)
		{
			//overflow exitst
			//check if Items array match item
			if (strcmp(item->key, key) == 0)
			{
				//a match was found in the items array
				//Remove it and set head of list there
				free_item(item);
				LinkedList *node = head;
				head = head->next;
				node->next = NULL;
				table->items[index] = create_item(node->item->key, node->item->value);
				free_linkedlist(node);
				table->overflow_buckets[index] = head;
				return;
			}

			//check the overflow for a match
			LinkedList* curr = head;
			LinkedList* prev = NULL;

			while (curr)
			{
				if (strcmp(curr->item->key, key) == 0)
				{
					if (prev == NULL)
					{//it is the first node

						//TODO: No need to free the
						//entire list, remove only the
						//matched element
						free_linkedlist(head);
						table->overflow_buckets[index] = NULL;
						return;
					}
					else
					{//The match is elsewhere in the overflow
						prev->next = curr->next;
						curr->next = NULL;
						free_linkedlist(curr);
						table->overflow_buckets[index] = head;
						return;
					}
				}
				curr = curr->next;
				prev = curr;
			}

		}
	}
}

/**
 * print_search - Prints the search result
 * @table: The table to search
 * @key: The key of the data to search
 *
 * Return: void
 */
void print_search(HashTable* table, char* key)
{
	char* val;
	if((val = ht_search(table, key)) == NULL)
	{
		printf("Key: %s does not exist", key);
		return;
	}
	else
	{
		printf("Key: %s, Value: %s\n", key, val);
	}
}


/**
 * print_table - Prints the hashtable
 * @table: A pointer to the Hash Table to be printed
 *
 * Return: void
 */
void print_table(HashTable* table)
{
	printf("\n\nHASH TABLE\n-----------------------------------------\n");
	printf("Index	| Key		| Value		|\n");
	printf("-----------------------------------------\n");
	for (int i = 0; i < table->size; i++)
		if (table->items[i] != NULL)
			printf("%d	|%s		| %s	|\n", i, table->items[i]->key, table->items[i]->value);
	printf("---------------------------------------------\n");
}
