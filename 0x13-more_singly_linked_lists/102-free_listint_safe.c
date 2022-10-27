#include "lists.h"

/**
 * print_listint_safe - Prints a linked list
 * @head: The head of the list to print
 *
 * Description: Can print a linked list that contains a loop
 *
 * Return: The number of nodes in the list
 */
size_t free_listint_safe(listint_t **h)
{
	unsigned int i, found;
	listptr_t *ptrhead;
	listint_t *temp;

	i = 0;
	ptrhead = NULL;

	while (*h != NULL)
	{
		found = search_list(ptrhead, *h);

		if (found)
		{
			free(*h);
			*h = NULL;
			free_listptr(ptrhead);
			return (i);
		}
		else
		{
			i++;
			ptrhead = add_to_head(ptrhead, *h);
			temp = *h;
			*h = (*h)->next;
			free(temp);
		}

		*h = (*h)->next;
	}

	free_listptr(ptrhead);
	return (i);
}
