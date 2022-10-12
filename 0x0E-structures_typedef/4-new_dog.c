#include "dog.h"

/**
 * _strlen - Calculates the length of a string 
 * @str: The string
 *
 * Return: The length of the string excluding the terminal null byte
 */
unsigned int _strlen(char *str)
{
	unsigned int i;

	i = 0;
	while (str[i] != '\0')
		i++;

	return (i);
}


/**
 * _strcpy - Make a copy of a string
 * @str: The string to copy
 * @buf: The memory location copy it to
 *
 * Return: pointer to the @buf
 */
char *_strcpy(char *buf, char *str)
{
	unsigned int i;

	i = 0;
	while (str[i] != '\0')
	{
		buf[i] = str[i];
		i++;
	}
	buf[i] = '\0';
	return (buf);
}


/**
 * new_dog - Creates a new dog
 * @name: The name of the dog
 * @age: The age of the dog
 * @owner: The name of the dog's owner
 *
 * Return: A new instance of dog
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog;
	char *name_copy;
	char *owner_copy;


	dog = malloc(sizeof(dog_t));

	if (dog == NULL)
		return (NULL);

	name_copy = malloc(sizeof(char) * (_strlen(name) + 1));
	if (name_copy == NULL)
	{
		free(dog);
		return (NULL);
	}

	owner_copy = malloc(sizeof(char) * (_strlen(owner) + 1));
	if (owner_copy == NULL)
	{
		free(dog);
		free(name_copy);
		free(owner_copy);
		return (NULL);
	}

	name_copy = _strcpy(name_copy, name);
	owner_copy = _strcpy(owner_copy, owner);

	dog->name = name_copy;
	dog->age = age;
	dog->owner = owner_copy;

	return (dog);
}
