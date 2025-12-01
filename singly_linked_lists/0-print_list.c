#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * print_list - Prints all elements of a list_t list
 * @h: Pointer to the first node of the list
 *
 * Description: For each node in the singly linked list, prints its
 * length and string value in the format "[len] str". If the string
 * is NULL, prints "[0] (nil)". Counts and returns the total number
 * of nodes in the list.
 *
 * Return: The number of nodes in the list
 */
 size_t print_list(const list_t *h)
 {
	size_t count = 0;
	while (h != NULL)
	{
		if (h->str != NULL)
		{
			printf("[%u] %s\n", h->len, h->str);
		}
		else
		{
			printf("[0] (nil)\n");
		}
		count++;
		h = h->next;
	}
	return (count);
}
