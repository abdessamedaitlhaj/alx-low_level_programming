#include <stdlib.h>
#include <stdio.h>
#include "dog.h"
/**
 * new_dog - create a new dog.
 * @name: dog name.
 * @age: age of the dog.
 * @owner: the owner name of the dog.
 *
 * Return: new dog struct. NULL otherwise.
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *d;

	d = malloc(sizeof(dog_t));
	if (!d)
		return (NULL);
	d->name = name;
	d->age = age;
	d->owner = owner;
	return (d);
}
