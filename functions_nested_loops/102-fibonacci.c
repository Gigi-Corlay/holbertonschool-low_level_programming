#include <stdio.h>

/**
 * main - point d'entrée du programme
 *
 * Description: Affiche les 50 premiers nombres de Fibonacci
 *              séparés par une virgule et un espace, suivi d'un retour à la ligne.
 *
 * Return: 0 (succès)
 */
int main(void)
{
	int a = 1;
	int b = 2;
	int next;
	int count;

	count = 2;
	printf ("%d, %d ", a, b);
	while (count < 50)
	{
		next = a + b;
		a = b;
		b = next;
		count++;

		if (count < 50)
			printf("%d, ", next);
		else
			printf("%d\n", next);
	}
	return(0);
}
