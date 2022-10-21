#include "lists.h"

/**
 * _strlen - Calculates the length of a string
 * @str: Pointer to the string
 *
 * Return: The length of the string
 */
unsigned int _strlen(const char *str)
{
	unsigned int i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

/**
 * add_node_end - Add a node to the end of the list
 * @head: The head of the list
 * @str: The string to be saved in the new node
 *
 * Return: The address of the new element, NULL if failed
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new;

	new = malloc(sizeof(list_t));

	if (new == NULL)
		return (NULL);

	new->str = strdup(str);
	new->len = _strlen(str);
	new->next = NULL;

	if (*head == NULL)
		*head = new;
	else
	{
		list_t *lastNode = *head;

		while (lastNode->next != NULL)
		{
			lastNode = lastNode->next;
		}

		lastNode->next = new;
	}

	return (*head);
}
