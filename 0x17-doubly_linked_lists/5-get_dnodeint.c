#include "lists.h"

/**
 * get_dnodeint_at_index - Gets the node at a certain index
 * @head: The head of the doubly linked list
 * @index: The index of the node to get
 *
 * Return: The node at the specified index. NULL if not exists
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *ptr;
	unsigned int count;

	count = 0;
	ptr = head;

	while (ptr != NULL && count <= index)
	{
		if (count == index)
			return ptr;
		count++;
		ptr = ptr->next;
	}

	return (NULL);
}	
