#include "lists.h"

/**
 * list_len - Calculates the number of nodes in a linked list
 * @h: The head of the linked list
 *
 * Return: The number of elements in the list
 */
size_t list_len(const list_t *h)
{
	size_t count;

	count = 0;
	while (h != NULL)
	{
		h = h->next;
		count++;
	}

	return (count);
}
