#ifndef LISTS_H
#define LISTS_H

#include <stdio.h>
#include <stdlib.h>

/**
 * struct listint_s - singly linked list
 * @n: integer
 * @next: points to the next node
 *
 * Description: singly linked list node structure
 *
 */
typedef struct listint_s
{
	int n;
	struct listint_s *next;
} listint_t;

/**
 * struct listptr_s - singlyh linked list of pointers
 * @value: The address of a node
 * @next: Points to the next node
 */
typedef struct listptr_s
{
	const listint_t *nodeptr;
	struct listptr_s *next;
} listptr_t;

size_t print_listint(const listint_t *h);
size_t listint_len(const listint_t *h);
listint_t *add_nodeint(listint_t **head, const int n);
listint_t *add_nodeint_end(listint_t **head, const int n);
void free_listint(listint_t *head);
void free_listint2(listint_t **head);
int pop_listint(listint_t **head);
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index);
int sum_listint(listint_t *head);
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n);
listint_t *insert_any_node(listint_t *anchor, listint_t *node);
int delete_nodeint_at_index(listint_t **head, unsigned int index);
listint_t *reverse_listint(listint_t **head);
size_t print_listint_safe(const listint_t *head);
listint_t *find_listint_loop(listint_t *head);
size_t free_listint_safe(listint_t **h);
listptr_t *add_to_head(listptr_t *head, const listint_t *node);
unsigned int search_list(listptr_t *head, const listint_t *value);
void free_listptr(listptr_t *head);


#endif /*LISTS_H*/
