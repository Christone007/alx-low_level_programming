#include "lists.h"
#include <stdio.h>

/**
 * delete_nodeint_at_index - deletes the node at the given index
 * @head: A pointer to the list head
 * @index: The index of the node to be deleted
 *
 * Return: 1 if success, -1 if failed
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *ptr;
	listint_t *ptr2;
	unsigned int i;

	ptr2 = *head;

	if (ptr2 == NULL)
	{
		return (-1);
	}

	if (index == 0)
	{
		ptr = *head;
		*head = (*head)->next;
		free(ptr);
		return (1);
	}

	i = 0;
	while (ptr2->next != NULL)
	{
		if (i == index - 1)
		{
			ptr = ptr2->next;
			ptr2->next = ptr2->next->next;

			free(ptr);
			ptr = NULL;
			return (1);
		}
		i++;
		ptr2 = ptr2->next;
	}

	return (-1);

}
