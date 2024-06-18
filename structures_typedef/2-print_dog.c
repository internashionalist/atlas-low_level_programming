#include "dog.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_dog - prints struct dog.
 * @d: struct dog being printed.
 *
 * Return - void
 */


void print_dog(struct dog *d)
{
	if (!d)
	{
		return;
