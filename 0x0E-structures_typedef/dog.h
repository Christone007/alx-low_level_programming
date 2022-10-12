#ifndef DOG_H
#define DOG_H

/*Libraries*/
#include <stdio.h>
#include <stdlib.h>

/**
 * struct dog - Defines a dog
 * @name: The name of the dog
 * @age: The age of the dog in months
 * @owner: The name of the dog owner
 *
 * Description - Defines the structure for creating dogs
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

/*Function prototypes*/
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
#endif /*DOG_H*/
