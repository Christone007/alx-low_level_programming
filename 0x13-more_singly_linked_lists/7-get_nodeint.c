#include "lists.h"

/**
 * get_nodeint_at_index - Finds and returns a node at particular index
 * @head: The head of the linked list
 * @index: The index of the node to find
 *
 * Return: The node if found, NULL if not found
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i;

	if (head == NULL)
		return (NULL);

	i = 0;
	while (head->next != NULL)
	{
		if (i == index)
			return (head);

		i++;
		head = head->next;
	}

	if (i == index)
		return (head);

	return (NULL);
}
