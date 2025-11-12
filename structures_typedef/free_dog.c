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

    /* Libérer les chaînes */
    free(d->name);
    free(d->owner);

    /* Libérer la structure elle-même */
    free(d);
}
