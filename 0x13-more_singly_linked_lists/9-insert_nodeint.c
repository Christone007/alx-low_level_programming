#include "lists.h"

/**
 * insert_any_node - Inserts a node
 * @anchor: The preceeding node which would point to new node
 * @node: The node to insert
 *
 * Return: Address of inserted node
 */
listint_t *insert_any_node(listint_t *anchor, listint_t *node)
{
	if (anchor == NULL)
	{
		anchor = node;
		return (anchor);
	}
	else if (anchor->next == NULL)
	{
		anchor->next = node;
	}
	else
	{
		node->next = anchor->next;
		anchor->next = node;
	}
	return (node);
}

/**
 * insert_nodeint_at_index - Inserts a node at a given index
 * @head: Pointer to the head of the list
 * @idx: The index at which to insert new node
 * @n: The data to be stored in the new node
 *
 * Return: address of new node, NULL if failed
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *ptr, *new_node;
	unsigned int i;

	ptr = *head;
	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	new_node->next = NULL;

	if (ptr == NULL)
	{
		if (idx == 0)
		{
			*head = new_node;
			return (*head);
		}
		else
			return (NULL);
	}
	if (idx == 0)
	{
		new_node->next = *head;
		*head = new_node;
		return (*head);
	}
	i = 0;
	while (ptr->next != NULL)
	{
		if (i == idx - 1)
			return (insert_any_node(ptr, new_node));
		i++;
		ptr = ptr->next;
	}

	if (i == idx - 1)
		return (insert_any_node(ptr, new_node));

	return (NULL);
}
