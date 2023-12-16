#include "lists.h"

/**
 * delete_dnodeint_at_0 - Delete the node whose index is 0
 * @head: The head of the list
 *
 * Description: The list must contain more than One node
 *
 * Return: 1 if successful, -1 if failed
 */
int delete_dnodeint_at_0(dlistint_t **head)
{
	dlistint_t *ptr = *head, *ptr2;

	(*head) = ptr->next;
	ptr2 = ptr->next;
	ptr2->prev = NULL;
	ptr->next = NULL;
	free(ptr);
	return (1);
}

/**
 * delete_dnodeint_at_middle - Delete specified node at the middle
 * @curptr: The Pointer to the current node of the list
 *
 * Return: 1 if successful, -1 of failed
 */
int delete_dnodeint_at_middle(dlistint_t **curptr)
{
	dlistint_t *ptr = *curptr, *ptr2;

	ptr2 = ptr->prev;
	ptr2->next = ptr->next;
	ptr2 = ptr->next;
	ptr2->prev = ptr->prev;
	ptr->next = NULL;
	ptr->prev = NULL;
	free(ptr);
	return (1);
}

/**
 * delete_dnodeint_at_index - Deletes the node at the given index
 * @head: The head of the doubly linked list
 * @index: The index of the node to be deleted
 *
 * Return: 1 if successful, -1 if failed
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	size_t count = 0;
	dlistint_t *ptr = *head, *ptr2;

	if (*head == NULL)
		return (-1);

	if ((*head)->next == NULL)
	{
		if (index != 0)
			return (-1);
		*head = NULL;
		free(ptr);
		return (1);
	}

	while (ptr->next != NULL)
	{
		if (count == index)
		{
			if (index == 0)
			{
				return (delete_dnodeint_at_0(head));
			}
			else
			{
				return (delete_dnodeint_at_middle(&ptr));
			}
		}
		ptr = ptr->next;
		count++;
	}
	if (index == count)
	{
		ptr2 = ptr->prev;
		ptr2->next = NULL;
		ptr->prev = NULL;
		free(ptr);
		return (1);
	}
	return (-1);
}
