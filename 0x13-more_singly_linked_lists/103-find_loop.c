#include "lists.h"

/**
 * find_listint_loop - Finds the position of a loop in a list
 * @head: The head of the list
 *
 * Return: The address of the node where the loop starts, NULL if no loop
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *slow_ptr, *fast_ptr;

	slow_ptr = head;
	fast_ptr = head;

	while (fast_ptr)
	{
		slow_ptr = slow_ptr->next;

		if (fast_ptr->next == NULL)
			return (NULL);

		fast_ptr = fast_ptr->next->next;

		if (slow_ptr == fast_ptr)
		{
			slow_ptr = head;
			
			while (slow_ptr != fast_ptr)
			{
				slow_ptr = slow_ptr->next;
				fast_ptr = fast_ptr->next;
			}
			return (slow_ptr);
		}
	}
	return (NULL);
}
