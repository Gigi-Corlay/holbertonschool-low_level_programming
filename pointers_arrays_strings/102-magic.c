#include <stdio.h>

/**
* main - Entry point
*
* Description: Adds one line to modify a[2] to 98 using the pointer p
*              and prints the value to check correctness.
*
* Return: Always 0.
*/
int main(void)
{
	int a[5];

	int *p = &a[2]; /* p pointe déjà sur a[2] */

	a[2] = 1024;    /* valeur initiale */

	/* Ligne à ajouter ici pour mettre 98 via p */

	if (a[2] == 98)
	{
		printf("a[2] = %d\n", a[2]);
	}

	return (0);
}
