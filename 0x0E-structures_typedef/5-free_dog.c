#include "dog.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * free_dog - free dog from memory
 * @d: dog object
 * Return: nothing
 **/
void free_dog(dog_t *d)
{
	if (d == NULL)
		return;
	if (d->owner != NULL)
		free(d->owner);
	if (d->name != NULL)
		free(d->name);

	free(d);
}
