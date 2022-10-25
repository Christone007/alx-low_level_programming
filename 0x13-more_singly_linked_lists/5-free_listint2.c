#include "lists.h"

/**
 * free_listint2 - Frees a list
 * @head: A pointer to head of the list
 *
 * Return: Nothing
 */
void free_listint2(listint_t **head)
{
	listint_t *temp, *ptr;

	ptr = *head;

	if (ptr == NULL)
	{
		*head = NULL;
		return;
	}

	while (ptr->next != NULL)
	{
		temp = ptr;
		ptr = ptr->next;
		free(temp);
		temp = NULL;
	}
	free(ptr);
	*head = NULL;
}
