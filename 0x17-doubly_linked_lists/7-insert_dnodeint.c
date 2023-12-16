#include "lists.h"

/**
 * insert_dnodeint_at_index - inserts a node at a given index
 * @h: The head of the linked list
 * @idx: The index to insert new node at
 * @n: The data to save in the new node
 *
 * Return: The address of the new node or NULL
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *ptr = *h, *newnode, *tmp;
	size_t count = 0;

	if (idx == 0)
		return (add_dnodeint(h, n));

	while (ptr != NULL && count <= idx)
	{
		if (count == idx)
		{
			newnode = malloc(sizeof(dlistint_t));
			if (newnode == NULL)
				return (NULL);
			newnode->n = n;
			newnode->next = ptr;
			newnode->prev = ptr->prev;

			tmp = ptr->prev;
			ptr->prev = newnode;
			tmp->next = newnode;
			return (newnode);
		}
		if (ptr->next == NULL)
			break;
		ptr = ptr->next;
		count++;
	}

	if (count + 1 == idx)
	{
		if ((*h) == NULL)
			return (NULL);
		else
			return (add_dnodeint_end(h, n));
	}
	return (NULL);
}
