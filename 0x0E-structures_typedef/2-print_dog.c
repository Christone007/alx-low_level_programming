#include "dog.h"

/**
 * print_dog - Prints the elements of a dog struct
 * @d: A pointer to the struct dog
 *
 * Return: void
 */
void print_dog(struct dog *d)
{
	if (d == NULL || !d)
		return;

	if (d->name == NULL)
		printf("Name: (nil)\n");
	else
		printf("Name: %s\n", d->name);

	if (d->age < 0)
		printf("Age: (nil)\n");
	else
		printf("Age: %.6f\n", d->age);

	if (d->owner == NULL)
		printf("Owner: (nil)i\n");
	else
		printf("Owner: %s\n", d->owner);

}
