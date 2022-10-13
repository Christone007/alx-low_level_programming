#include "dog.h"

/**
 * print_dog - Prints the elements of a dog struct
 * @d: A pointer to the struct dog
 *
 * Return: void
 */
void print_dog(struct dog *d)
{
	if (!d || d == NULL)
		return;

	if (d->name == NULL)
		printf("Name: (nil)\n");
	else
		printf("Name: %s\n", d->name);

	if (d->age < 0)
		printf("Age: (nil)\n");
	else
		printf("Age: %f\n", d->age);

	if (d->owner == NULL)
		printf("Owner: (nil)\n");
	else
		printf("Owner: %s\n", d->owner);

}