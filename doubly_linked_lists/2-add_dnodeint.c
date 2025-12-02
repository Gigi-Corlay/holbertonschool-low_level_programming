#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * add_dnodeint - Adds a new node at the beginning of a doubly linked list
 * @head: Double pointer to the head of the list
 * @n: Value to be stored in the new node
 *
 * Description: Allocates memory for a new node, initializes its value,
 *              inserts it at the beginning of the list, and updates
 *              the previous head node if the list is not empty.
 *
 * Return: Address of the new node, or NULL if memory allocation fails
 */
 dlistint_t *add_dnodeint(dlistint_t **head, const int n)
 {
	dlistint_t *new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);
	new_node->n = n;
	new_node->prev = NULL;
	new_node->next = *head;

	if (*head)
		(*head)->prev = new_node;
	*head = new_node;
	return (new_node);
 }
