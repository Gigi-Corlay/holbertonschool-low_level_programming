#include <stdio.h>
#include "dog.h"

/**
 * print_dog - Prints the details of a dog structure.
 * @d: Pointer to the struct dog to print.
 *
 * Description: If any member of the struct is NULL, this function prints (nil)
 * instead of the value. If d is NULL, the function does nothing.
 */
void print_dog(struct dog *d)
{
	if (d == NULL)
		return;

	if (d->name == NULL)
		printf("Name: (nil)\n");
	else
		printf("Name: %s\n", d->name);

	printf("Age: %f\n", d->age);

	if (d->owner == NULL)
		printf("Owner: (nil)\n");
	else
		printf("Owner: %s\n", d->owner);
}
