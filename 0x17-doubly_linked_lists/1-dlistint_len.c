#include "lists.h"

/**
 * dlistint_len - Prints a doubly linked list
 * @h: The head of the list
 *
 * Return: The number of nodes in the list
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t size;

	size = 0;

	if (h == NULL)
		return (0);

	while (h != NULL)
	{
		size++;
		h = h->next;
	}

	return (size);
}
