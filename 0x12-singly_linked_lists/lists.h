#ifndef LISTS_H
#define LISTS_H

#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * _putchar - writes the character c to stdout
 * @c: The char to write
 * Return: The number of bytes written
 */
int _putchar(char c);

/**
 * struct list_s - singly linked list
 * @str: string - (malloc'ed string)
 * @len: length of the string
 * @next: points to the next node
 *
 * Description: singly linked list node structure
 */
typedef struct list_s
{
	char *str;
	unsigned int len;
	struct list_s *next;
} list_t;

/**
 * print_list - Prints all the elements of a list_t list
 * @h: The list to print
 * Return: The number of nodes in the list
 */
size_t print_list(const list_t *h);

/**
 * list_len - Calculates the number of nodes in a linked list
 * @h: The head of the linked list
 *
 * Return: The number of elements in the list
 */
size_t list_len(const list_t *h);

/**
 * add_node - Adds a new node at the beginning of a list_t list
 * @head: The head of the list
 * @str: The string to be saved in the node
 *
 * Return: Pointer to the updated list
 */
list_t *add_node(list_t **head, const char *str);

/**
 * add_node_end - Adds a new node at the end of a list_t list
 * @head: The head of the list
 * @str: The string to be saved in the node
 *
 * Return: Pointer to head of updated list
 */
list_t *add_node_end(list_t **head, const char *str);

/**
 * free_list - Frees a linked list
 * @head: The head of the linked list
 *
 * Return: void
 */
void free_list(list_t *head);

#endif /*LISTS_H*/
