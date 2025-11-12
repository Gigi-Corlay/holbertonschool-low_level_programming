#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
 * free_dog - Frees a dog created with new_dog
 * @d: Pointer to the dog to free
 */
void free_dog(dog_t *d)
{

	if (d == NULL)
		return;

	if (d->name != NULL)
		free(d->name);

	if (d->owner != NULL)
		free(d->owner);

	free(d);
}
