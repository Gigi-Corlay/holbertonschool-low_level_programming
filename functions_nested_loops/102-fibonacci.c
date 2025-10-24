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
	long long int a = 1;
	long long int b = 2;
	long long int next;
	int count;

	count = 2;
	printf ("%lld, %lld ", a, b);
	while (count < 50)
	{
		next = a + b;
		a = b;
		b = next;
		count++;

		if (count < 50)
			printf("%lld, ", next);
		else
			printf("%lld\n", next);
	}
	return(0);
}
