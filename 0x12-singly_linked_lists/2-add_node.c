#include "lists.h"

/**
 * _strlen - Gets the length of a string
 * @str: The string whose length is to be found
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
 * add_node - Adds a new node at the beginning of a list_t list
 * @head: The head of the list
 * @str: The string to be saved in the node
 *
 * Return: Pointer to the new element, NULL if fail
*/
list_t *add_node(list_t **head, const char *str)
{

	list_t *new;

	new = malloc(sizeof(list_t));

	new->str = strdup(str);
	new->len = _strlen(str);
	new->next = *head;

	*head = new;

	return (*head);
}
