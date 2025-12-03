#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * insert_dnodeint_at_index - Inserts a new node at a given index
 * @h: Double pointer to the head of the doubly linked list
 * @idx: Position where the new node should be inserted (starting at 0)
 * @n: Value to store in the new node
 *
 * Description:
 * This function inserts a new node at the specified index in a doubly
 * linked list. If idx is 0, the node is added at the beginning. If the
 * index corresponds to the end of the list, the node is added at the end.
 * If the index is out of range, no node is added and NULL is returned.
 *
 * Return: The address of the newly inserted node, or NULL on failure.
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *current;
    dlistint_t *new_node;
    unsigned int i;
	
	if (h == NULL)
        return (NULL);

	if (idx == 0)
	{
		return (add_dnodeint(h, n));
	}

	current = *h;
	for (i = 0; i < (idx - 1) && current != NULL; i++)
	{
		current = current->next;
	}

	if (current == NULL)
        return (NULL);

    if (current->next == NULL)
        return (add_dnodeint_end(h, n));

    new_node = malloc(sizeof(dlistint_t));
    if (new_node == NULL)
        return (NULL);

	new_node->n = n;
	new_node->next = current->next;
	current->next = new_node;
	new_node->prev = current;

	if (new_node->next != NULL)
		new_node->next->prev = new_node;

	return (new_node);
}
