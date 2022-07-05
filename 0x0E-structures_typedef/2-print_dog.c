#include "dog.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * print_dog - function that prints a struct dog
 * @d: struct name
 * Return: Always 0 (Success)
 */

void print_dog(struct dog *d)
{
	if (d == NULL)
		return;
	if (d->name == NULL)
		d->name = "(nil)";
	if (d->owner == NULL)
		d->owner = "(nil)";

	printf("Name; %s\nAge: %0.6f\nowner: %s\n", d->name, d->age, d->owner);
}
