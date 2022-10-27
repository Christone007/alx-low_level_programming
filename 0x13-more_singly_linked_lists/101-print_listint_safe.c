#include "lists.h"

/**
 * add_to_head - Adds a node to the head of a list
 * @head: The list head
 * @value: The value to be stored in the new node
 *
 * Return: void
 */
listptr_t *add_to_head(listptr_t *head, const listint_t *node)
{
	listptr_t *ptr;

	ptr = malloc(sizeof(listptr_t));
	if (ptr == NULL)
		return (NULL);

	ptr->nodeptr = (void *)node;
	ptr->next = NULL;

	if (head == NULL)
	{
		head = ptr;
		return (head);
	}
	else
	{
		ptr->next = head;
		head = ptr;

		return (head);
	}
}

/**
 * search_list - Searches a list for a value
 * @value: The value to find
 * @head: The head of the list to search
 *
 * Return: 1 if found, else 0
 */
unsigned int search_list(listptr_t *head, const listint_t *value)
{
	while (head != NULL)
	{
		if (head->nodeptr == value)
			return (1);
		head = head->next;
	}
	return (0);
}

/**
 * print_listint_safe - Prints a linked list
 * @head: The head of the list to print
 *
 * @Description: Can print a linked list that contains a loop
 *
 * Return: The number of nodes in the list
 */
size_t print_listint_safe(const listint_t *head)
{
	unsigned int i, found;
	listptr_t *ptrhead;

	i = 0;
	ptrhead = NULL;

	while (head != NULL)
	{
		found = search_list(ptrhead, head);

		if (found)
		{
			i++;
			printf("-> [%p] %d\n", (void *)head, head->n);
			return (i);
		}
		else
		{
			i++;
			printf("[%p] %d\n", (void *)head, head->n);
			ptrhead = add_to_head(ptrhead, head);
		}

		head = head->next;
	}

	return (98);
}
