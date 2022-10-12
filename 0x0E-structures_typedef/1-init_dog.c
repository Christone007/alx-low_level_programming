#include "dog.h"
#include "main.h"

/**
 * init_dog - Initializes a variable of type struct dog
 * @d: A pointer to the struct instance being initialized
 * @name: A string pointer to the dog's name
 * @age: A float value of the dog's age
 * @owner: A string pointer to the dog owner's name
 *
 * Return: void
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	/*A pointer has already been passed, we do not need to create again*/
	if (d == NULL)
		return;

	d->name = name;
	d->age = age;
	d->owner = owner;
}
