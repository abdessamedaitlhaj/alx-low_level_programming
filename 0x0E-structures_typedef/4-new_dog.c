#include <stdlib.h>
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
	int i;

	d = malloc(sizeof(dog_t));
	if (d == NULL)
		return (NULL);

	i = 0;
	while (name[i])
	{
		d->name[i] = name[i];
		i++;
	}
	d->name[i] = '\0';

	i = 0;
	while (owner[i])
	{
		d->owner[i] = owner[i];
		i++;
	}
	d->owner[i] = '\0';

	d->age = age;
	d->owner = owner;
	return (d);
}
