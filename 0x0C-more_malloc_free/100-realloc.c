#include "main.h"

/**
 * _realloc - Reallocate a memory space
 * @ptr: Pointer to previous memory block
 * @old_size: The size of the previous memory block
 * @new_size: The size of the newly allocated block
 *
 * Return: A void pointer to the allocated memory, NULL if error
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	unsigned int i;
	unsigned char *temp = ptr;

	i = 0;
	if (ptr == NULL)
	{
		ptr = malloc(new_size);
		return (ptr);
	}
	if (new_size == old_size)
		return (ptr);
	if (new_size == 0 && ptr)
	{
		free(ptr);
		return (NULL);
	}
	if (new_size > old_size)
	{
		ptr = malloc(new_size);
		if (ptr == NULL)
			return (NULL);
		while (i < old_size)
		{
			*((unsigned int *)ptr + i) = temp[i];
			i++;
		}
	}
	if (new_size < old_size)
	{
		ptr = malloc(new_size);
		if (ptr == NULL)
			return (NULL);
		while (i < new_size)
		{
			*((unsigned int *)ptr + i) = temp[i];
			i++;
		}
	}
	free(temp);
	return (ptr);
}
