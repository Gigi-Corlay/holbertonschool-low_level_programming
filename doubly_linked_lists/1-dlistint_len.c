#include <stdlib.h>
#include "lists.h"

/**
 * dlistint_len - retourne le nombre de nœuds dans une
 *                liste doublement chaînée
 * @h: pointeur vers le premier nœud de la liste
 *
 * Description: Parcourt la liste depuis la tête jusqu'à la fin
 *              et compte le nombre total de nœuds.
 *
 * Return: le nombre de nœuds dans la liste
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t count = 0;
	const dlistint_t *current = h;

	while (current != NULL)
	{	
		count++;
		current = current->next;
	}	
	return (count);
}
