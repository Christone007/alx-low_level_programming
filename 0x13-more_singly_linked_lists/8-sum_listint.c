#include "lists.h"

/**
 * sum_listint - Sums up all the data in a linked list of numbers
 * @head: A pointer to the first element of list
 *
 * Return: sum of values in the list, 0 if list is empty
 */
int sum_listint(listint_t *head)
{
	int sum;

	if (head == NULL)
		return (0);

	sum = 0;
	while (head->next != NULL)
	{
		sum += head->n;
		head = head->next;
	}

	sum += head->n;

	return (sum);
}
