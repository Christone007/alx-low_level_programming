#include "lists.h"

/**
 * listint_len - Prints all the elements of a linked list
 * @h: The head of the linked list
 *
 * Return: The number of nodes
 */
size_t listint_len(const listint_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		count++;
		h = h->next;
	}

	return (count);
}
