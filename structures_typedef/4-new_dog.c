#include <stdlib.h>
#include <string.h>
#include "dog.h"

/**
 * new_dog - Creates a new dog
 * @name: Name of the dog
 * @age: Age of the dog
 * @owner: Owner of the dog
 *
 * Return: Pointer to the new dog, or NULL if memory allocation fails
 */
dog_t *new_dog(char *name, float age, char *owner)
{
    dog_t *dog;
    char *name_copy;
    char *owner_copy;

    /* Si name ou owner est NULL, retourner NULL */
    if (name == NULL || owner == NULL)
        return (NULL);

    /* Allouer la structure */
    dog = malloc(sizeof(dog_t));
    if (dog == NULL)
        return (NULL);

    /* Allouer et copier name */
    name_copy = malloc(strlen(name) + 1);
    if (name_copy == NULL)
    {
        free(dog);
        return (NULL);
    }
    strcpy(name_copy, name);

    /* Allouer et copier owner */
    owner_copy = malloc(strlen(owner) + 1);
    if (owner_copy == NULL)
    {
        free(name_copy);
        free(dog);
        return (NULL);
    }
    strcpy(owner_copy, owner);

    /* Remplir la structure */
    dog->name = name_copy;
    dog->owner = owner_copy;
    dog->age = age;

    return (dog);
}
