#include "lists.h"
/**
 * add_dnodeint_end - add a node at the end of a doubly linked list
 * @head: The head of the list
 * @n: The data to add
 *
 * Return: The address of the new node or NULL if failed
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *newnode, *ptr;

	ptr = *head;

	/*Create new node*/
	newnode = malloc(sizeof(dlistint_t));
	if (newnode == NULL)
		return (NULL);

	newnode->n = n;
	newnode->next = NULL;

	if (*head == NULL)
	{
		(*head) = newnode;
		newnode->prev = (*head);
		return (newnode);
	}

	while (ptr->next != NULL)
	{
		ptr = ptr->next;
	}

	ptr->next = newnode;
	newnode->prev = ptr;

	return (newnode);
}
