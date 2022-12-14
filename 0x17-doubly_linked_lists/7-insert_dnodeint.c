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
	dlistint_t *ptr, *newnode;
	size_t count = 0;

	ptr = *h;
	newnode = malloc(sizeof(dlistint_t));
	if (newnode == NULL)
		return (NULL);
	newnode->next = NULL;
	newnode->prev = NULL;
	newnode->n = n;
	if (*h == NULL)
	{
		if (idx == 0)
		{
			*h = newnode;
			return (newnode);
		}
		else
			return (NULL);
	}
	while (ptr->next != NULL && count <= idx)
	{
		if (count == idx)
		{
			newnode->next = ptr->next;
			newnode->prev = ptr;
			ptr->next->prev = newnode;
			ptr->next = newnode;
			return (newnode);
		}
		ptr = ptr->next;
		count++;
	}
	if (count + 1 == idx)
	{
		newnode->prev = ptr;
		ptr->next = newnode;
		return (newnode);
	}
	return (NULL);
}
