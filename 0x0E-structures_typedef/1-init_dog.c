#include "main.h"
/**
 * init_dog - initialize the dog struct.
 * @d: dog struct.
 * @name: name of the dog.
 * @age: age of the dog.
 * @owner: owner name of the dog.
 *
 * Return: nothing.
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d->name = name;
	d->age = age;
	d->owner = owner;
}
