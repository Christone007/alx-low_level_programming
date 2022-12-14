#include "lists.h"

/**
 * add_dnodeint - Add a new node into a doubly linked list
 * @head: The head of the list
 * @n: The data to save in new node
 *
 * Return: Address of new node, or NULL if fail
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *newnode;

	/*Create the new node*/
	newnode = malloc(sizeof(dlistint_t));
	if (newnode == NULL)
		return (NULL);

	newnode->n = n;
	newnode->next = *head;
	newnode->prev = NULL;


	/*Link it to the beginning*/
	if ((*head) != NULL)
		(*head)->prev = newnode;
	(*head) = newnode;

	return (*head);
}
