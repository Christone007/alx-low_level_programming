#include "lists.h"

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

	if (ptr == NULL && idx == 0)
	{
		/*Insert new node at beginning*/
		ptr = new_node;
		return (ptr);
	}
	else if (ptr == NULL && idx != 0)
		return (NULL);

	i = 0;
	while (ptr->next != NULL)
	{
		if (i == idx - 1)
		{
			/*Insert new node in front*/
			new_node->next = ptr->next;
			ptr->next = new_node;
			ptr = new_node;
			return (ptr);
		}
		i++;
		ptr = ptr->next;
	}

	if (i == idx - 1)
	{
		/*insert at end*/
		ptr->next = new_node;
		return (ptr);
	}

	return (NULL);
}
