#include <stdio.h>
#include "main.h"
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
		printf("nil\n");
	else
		printf("%s\n", d->name);
	if (&d->age == NULL)
		printf("nil\n");
	else
		printf("%f\n", d->age);
	if (d->owner == NULL)
		printf("nil\n");
	else
		printf("%s\n", d->owner);
	if (d == NULL)
		printf("\n");
}
