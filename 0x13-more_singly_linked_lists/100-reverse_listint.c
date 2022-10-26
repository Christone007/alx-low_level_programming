#include "lists.h"

/**
 * reverse_listint - Reverses a linked list
 * @head: A pointer to the head of the list
 *
 * Return: Pointer to first node of reversed list
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *ahead, *previous;

	ahead = NULL;
	previous = NULL;

	while (*head != NULL)
	{
		ahead = (*head)->next;
		(*head)->next = previous;
		previous = *head;
		*head = ahead;
	}
	*head = previous;

	return (*head);
}

