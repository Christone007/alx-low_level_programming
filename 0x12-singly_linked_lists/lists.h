#ifndef LISTS_H
#define LISTS_H

#include <stddef.h>
#include <stdio.h>

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

#endif /*LISTS_H*/
