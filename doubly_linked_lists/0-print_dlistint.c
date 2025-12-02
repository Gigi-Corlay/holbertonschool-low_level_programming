#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * print_dlistint - Prints all the elements of a doubly linked list
 * @h: Constant pointer to the head of the list
 *
 * Description: Iterates through a doubly linked list, printing each node's
 *              value, and counts the total number of nodes.
 *
 * Return: The number of nodes printed
 */
 size_t print_dlistint(const dlistint_t *h)
 {
	size_t count = 0;

	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
		count++;
	}
	return (count);
 }
