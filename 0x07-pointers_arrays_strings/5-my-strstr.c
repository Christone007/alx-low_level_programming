#include "main.h"

/**
 * _strstr - Locate a substring in a string
 * @haystack: The string
 * @needle: The substring
 *
 * Return: if substring is found, Pointer to the beginning
 * of found substring. Else, return NULL
 */
char *_strstr(char *haystack, char *needle)
{
	printf("what we got: %s and %s\n", haystack, needle);

	printf("We would try to dereference Haystack and needle\n");

	printf("Haystack[0]: %c, needle[0]: %c", *haystack, *needle);

	return (NULL);
}
