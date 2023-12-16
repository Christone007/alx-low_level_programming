#include "lists.h"

/**
 * sum_dlistint - Sums up all data items
 * @head: The head of the list
 *
 * Return: The sum
 */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	if (head == NULL)
		return (0);

	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}

	return (sum);
}
