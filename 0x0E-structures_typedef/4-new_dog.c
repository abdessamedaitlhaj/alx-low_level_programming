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
	int i, l1 = 0, l2 = 0;

	d = malloc(sizeof(dog_t *));
	if (d == NULL)
	{
		free(d);
		return (NULL);
	}
	for (i = 0; name[i]; i++, l1++)
	{}
	for (i = 0; owner[i]; i++, l2++)
	{}
	d->name = malloc(sizeof(char *) * (l1 + 1));
	d->owner = malloc(sizeof(char *) * (l2 + 1));

	if (d->name == NULL || d->owner == NULL)
	{
		free(d->owner);
		free(d->name);
		free(d);
		return (NULL);
	}

	for (i = 0; i < l1; i++)
		d->name[i] = name[i];
	(d->name)[i] = '\0';
	for (i = 0; i < l2; i++)
		d->owner[i] = owner[i];
	d->owner[i] = '\0';
	d->age = age;
	return (d);
}
