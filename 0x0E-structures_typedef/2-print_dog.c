#include <stdio.h>
#include "dog.h"
/**
 * print_dog - print dog struct.
 * @d: dog struct.
 *
 * Return: nothing.
 */
void print_dog(struct dog *d)
{
	if (d->name == NULL)
		printf("Name: (nil)\n");
	else
		printf("Name: %s\n", d->name);
	if (&d->age == NULL)
		printf("Age: (nil)\n");
	else
		printf("Age: %f\n", d->age);
	if (d->owner == NULL)
		printf("Owner: (nil)\n");
	else
		printf("Owner: %s\n", d->owner);
	if (d == NULL)
		printf("");
}
