#include <stdio.h>

/**
 * main - point d'entrée du programme
 *
 * Description: Affiche les 50 premiers nombres de Fibonacci
 * séparés par une virgule et un espace, suivi d'un retour à la ligne.
 *
 * Return: 0 (succès)
 */
int main(void)
{
	unsigned long a = 1;
	unsigned long b = 2;
	unsigned long next;
	int count;

	count = 2;
	printf ("%lu, %lu, ", a, b);
	while (count < 50)
	{
		next = a + b;
		a = b;
		b = next;
		count++;

		if (count < 50)
			printf("%lu, ", next);
		else
			printf("%lu\n", next);
	}
	return(0);
}
