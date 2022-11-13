#include "main.h"


/**
 * check_match - Checks if the first string matches the part of
 * the second string that comes before an '=' sign
 * @name: The first string which would be searched for
 * @env: The second string which has two parts seperated by '=' sign
 *
 * Return: The number of characters matched, or 0 if a match is not found
 */
int check_match(const char *name, char *env)
{
	int i = 0;

	while(name[i] != '\0')
	{
		if (name[i] != env[i])
			return (0);

		i++;
	}
	
	/*Confirm that next character is '=' sign to validate match*/
	if (env[i] == '=')
		return (i);

	return (0);
}


/**
 * append_to_list - add a new node at the tail of a linked list
 * @head: The pointer to the head of the list
 * @str: The string to store into a node
 *
 * Return: The pointer to the head of the list
 */
list_t *append_to_list(list_t *head, char *str)
{
	list_t *new_node;
	list_t *ptr;

	ptr = head;

	new_node = malloc(sizeof(list_t));
	new_node->dir = str;
	new_node->next = NULL;

	if (head == NULL)
	{
		head = new_node;
	}
	else
	{
		while(ptr->next != NULL)
		{
			ptr = ptr->next;
		}
		ptr->next = new_node;
	}

	return (head);
}

/**
 * build_linked_list - Builds a linked list from an array
 * @arr: The array to build with
 *
 * Return: Pointer to head of linked list
 */
list_t *build_linked_list(char **arr)
{
	list_t *mylist;
	int i = 0;

	mylist = NULL;

	while (arr[i] != NULL)
	{
		/*Add arr[i] to list*/
		mylist = append_to_list(mylist, arr[i]);
		i++;
	}

	return(mylist);
}
