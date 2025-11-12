#include <stdio.h>
#include "dog.h"
#include <stddef.h>
#include <stdlib.h>
#include <string.h>

/**
 * free_dog - frees a dog struct and its associated memory
 * @d: pointer to the dog struct to be freed
 *
 * Checks if the input pointer is NULL.
 *
 * This prevents memory leaks in the program when freeing dog
 */

void free_dog(dog_t *d)
{
	if (d == NULL)
	{
		return;
	}
	free(d->name);
	free(d->owner);
	free(d);
}
/**
 * _strlen - Finds the length of a string.
 * @str: The string to be measured.
 *
 * Return: The length of the string.
 */
int _strlen(char *str)
{
	int len = 0;

	while (*str++)
		len++;

	return (len);
}
/**
 * _strcopy - Copies a string pointed to by src, including the
 *            terminating null byte, to a buffer pointed to by dest.
 * @dest: The buffer storing the string copy.
 * @src: The source string.
 *
 * Return: The pointer to dest.
 */
char *_strcopy(char *dest, char *src)
{
	int index = 0;

	for (index = 0; src[index]; index++)
		dest[index] = src[index];

	dest[index] = '\0';

	return (dest);
}

/**
 * new_dog - creates a new dog struct
 * @name: dog's name
 * @age: dog's age
 * @owner: owner's name
 *
 * Return: pointer to the new dog_t, or NULL on failure
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *newdog;
	char *name_copy;
	char *owner_copy;

	if (name == NULL || owner == NULL)
	{
		return (NULL);
	}

	newdog = malloc(sizeof(dog_t));
	if (newdog == NULL)
	{
		return (NULL);
	}

	name_copy = malloc((_strlen(name) + 1) * sizeof(char));
	if (name_copy == NULL)
	{
		free(newdog);
		return (NULL);
	}
	_strcopy(name_copy, name);

	owner_copy = malloc((_strlen(owner) + 1) * sizeof(char));
	if (owner_copy == NULL)
	{
		free(name_copy);
		free(newdog);
		return (NULL);
	}
	_strcopy(owner_copy, owner);

	newdog->name = name_copy;
	newdog->age = age;
	newdog->owner = owner_copy;

	return (newdog);
}
