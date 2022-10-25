#include "lists.h"

/**
 * free_listint - Frees a list
 * @head: The head of the list
 *
 * Return: Nothing
 */
void free_listint(listint_t *head)
{
	listint_t *temp;

	if (head == NULL)
		return;

	while (head->next != NULL)
	{
		temp = head;
		head = head->next;
		free(temp);
		temp = NULL;
	}

	free(head);
	head = NULL;
}
