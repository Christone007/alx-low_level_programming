#ifndef HTABLE_HEADER
#define HTABLE_HEADER

#define CAPACITY 50000 // Size of the Hash Table
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * Ht_item - The item to be stored in the Hash Table
 * @key: The key of the item
 * @value: The value of the item
 */
typedef struct Ht_item {
	char* key;
	char* value;
}Ht_item;



/**
 * LinkedList - defines a linked list node
 * @item: The item to be stored in the node
 * @next: A pointer to the next node
 */
typedef struct LinkedList LinkedList;
struct LinkedList {
	Ht_item* item;
	LinkedList* next;
};



/**
 * HashTable - The hashtable is an contains an array of pointers
 * which each points to a Ht_item
 * @items: The array of item pointers
 * @count: Tracks number of items inserted into the table
 * @size: The number of buckets in the table
 *
 * Description: A hashtable is an array (behaves like a pointer),
 * each element of the array is a pointer to a Ht_item, hence a 
 * pointer to a pointer
 */
typedef struct HashTable {
	Ht_item** items;
	LinkedList** overflow_buckets;
	int count;
	int size;
}HashTable;


//FUNCTION PROTOTYPES
void handle_collision(HashTable* table, unsigned long index, Ht_item* item)
void ht_insert(HashTable* table, char* key, char* value);
void ht_delete(HashTable* table, char* key);
char* ht_search(HashTable* table, char* key);
void print_search(HashTable* table, char* key);
void print_table(HashTable* table);
Ht_item* create_item(char* key, char* value);
HashTable* create_table(int size);
void free_item(Ht_item* item);
void free_table(HashTable* table);
unsigned long hash_function(char *str);
LinkedList* allocate_list();
LinkedList* linkedlist_insert(LinkedList* list, Ht_item* item);
void print_list(LinkedList* list);
Ht_item* linkedlist_remove(LinkedList* list);
void free_linkedlist(LinkedList* list);
void print_list(LinkedList* list);
LinkedList** create_overflow_buckets(HashTable* table);
void free_overflow_buckets(HashTable* table);


#endif /*HTABLE_HEADER*/
