#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
* _calloc - allocates memory for an array and initializes it to 0
* @nmemb: number of elements in the array
* @size: size in bytes of each element
*
* Description: Allocates memory for an array of nmemb elements of size bytes each.
* The allocated memory is set to zero. If nmemb or size is 0, or if malloc fails,
* the function returns NULL.
*
* Return: Pointer to the allocated memory, or NULL on failure.
*/
void *_calloc(unsigned int nmemb, unsigned int size)

{
	void *ptr;

	if (nmemb == 0 || size == 0)
		return (NULL);

	ptr = malloc(nmemb * size);
	if (ptr == NULL)
		return (NULL);

		memset(ptr, 0, nmemb * size);

	return (ptr);
}
