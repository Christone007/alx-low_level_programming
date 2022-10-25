#include "lists.h"

/**
 * pop_listint - Removes the first node
 * @head: Pointer to the head pointer
 *
 * Return: The value stored in the first node
 */
int pop_listint(listint_t **head)
{
	listint_t *ptr;
	int n;

	if (*head == NULL)
		return (0);

	ptr = *head;
	ptr = ptr->next;

	n = (*head)->n;
	free(*head);
	*head = ptr;
	return (n);
}
