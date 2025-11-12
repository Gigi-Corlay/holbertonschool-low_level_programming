#ifndef DOG_H
#define DOG_H

/**
* struct dog - structure representing a dog
* @name: name of the dog
* @age: age of the dog
* @owner: name of the owner
*
* Description: This structure stores basic information about a dog.
*/
typedef struct dog
{
	char *name;
	float age;
	char *owner;
} dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);

#endif
