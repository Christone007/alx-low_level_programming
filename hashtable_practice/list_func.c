#include "htable_header.h"

/**
 * allocate_list - Allocates memory for a linked list
 * 
 * Return: A pointer to the list
 */
LinkedList* allocate_list()
{
	LinkedList* list = malloc(sizeof(LinkedList));
	return list;
}


/**
 * linkedlist_insert - Inserts a node into a linked list
 * @list: The head of the linked list
 * @item: The Ht_item* to insert into the node
 *
 * Return: A pointer to the head of the linked list
 */
LinkedList* linkedlist_insert(LinkedList* list, Ht_item* item)
{
	if (!list)
	{
		LinkedList* head = allocate_list();
		head->item = item;
		head->next = NULL;
		list = head;
		return list;
	}
	else if (list->next == NULL)
	{
		LinkedList* node = allocate_list();
		node->item = item;
		node->next = NULL;
		list->next = node;
		return list;
	}

	LinkedList* temp = list;
	while (temp->next->next)
	{
		temp = temp->next;
	}

	LinkedList* node = allocate_list();
	node->item = item;
	node->next = NULL;
	temp->next->next = node;

	return list;
}



/**
 * linkedlist_remove - Remove the head from a linked list
 * and returns the item of the popped element
 *
 * @list: The head of the list
 *
 * Return: The item of the popped head
 */
Ht_item* linkedlist_remove(LinkedList* list)
{
	printf("Remove item called\n");
	if (!list)
		return NULL;
	if (!list->next)
		return NULL;

	printf("Neither empty nor 1\n");
	LinkedList* node = list->next;
	LinkedList* temp = list;

	temp->next = NULL;
	list = node;

	printf("Head removed successfully\n");
	Ht_item* it = NULL;
	printf("Temp->item->key : %s Value : %s\n", temp->item->key, temp->item->value);

	memcpy(temp->item, it, sizeof(Ht_item));
	printf("memcpy passed\n");
	free(temp->item->key);
	free(temp->item->value);
	free(temp->item);
	free(temp);
	return it;
}

/**
 * free_linkedlist - Frees a linked list
 * @list: The head of the list to free
 *
 * Return: void
 */
void free_linkedlist(LinkedList* list)
{
	LinkedList* temp = list;
	while (list) {
		temp = list;
		list = list->next;

		free(temp->item->key);
		free(temp->item->value);
		free(temp->item);
		free(temp);
	}
}

/**
 * print_list - Prints a linked list
 * @list: The head of the list to print
 * 
 * Return: void
 */
void print_list(LinkedList* list)
{
	printf("List printer called \n");

	while (list != NULL)
	{
		printf("Node contains %s\n", list->item->key);
		list = list->next;
	}
}
