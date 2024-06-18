#include "dog.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_dog - prints struct dog
 * @d: struct dog elements
 *
 * Return - void
 */


void print_dog(struct dog *d)
{
	if (!d)
	return;

	printf("Name: %s\n", d->name ? d->name : "(nil)");
	printf("Age: %f\n", d->age);
	printf("Owner: %s\n", d->owner ? d->owner : "(nil)");
}
