#include <stdlib.h>
#include "dog.h"

/**
 * free dog - free dog
 * @d: pointer to dog to free
 *
 * Return: void
 */

void free_dog(dog_t *d)
{
	if (d)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}
