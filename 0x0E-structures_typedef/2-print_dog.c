#include "dog.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * print_dog - prints a struct dog
 * @d: dog object
 * Return: nothing
 **/
void print_dog(struct dog *d)
{
	if (d == NULL)
		return;
	printf("Name: %s\n", (d->name == NULL) ? "(nil)" : d->name);
	printf("Age: %f\n", d->age);
	printf("Owner: %s\n", (d->owner == NULL) ? "(nil)" : d->owner);
}
