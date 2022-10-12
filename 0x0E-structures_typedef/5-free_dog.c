#include "dog.h"

/**
 * free_dog - free the memory previously holding a dog
 * @d: A pointer to the memory holding the dog
 *
 * Return: void
 */
void free_dog(dog_t *d)
{
	free(d);
}
