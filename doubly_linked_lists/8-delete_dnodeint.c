#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
* delete_dnodeint_at_index - Deletes the node at a given index
*                             of a dlistint_t linked list
* @head: Double pointer to the head of the doubly linked list
* @index: Index of the node to delete, starting at 0
*
* Description: This function deletes the node at position `index`
*              in a doubly linked list. If the node exists, it
*              updates the surrounding nodes' pointers and frees
*              the node. Returns 1 on success, or -1 if it fails
*              (invalid index or empty list).
*
* Return: 1 if it succeeded, -1 if it failed
*/
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *current;
	unsigned int i;

	if (head == NULL || *head == NULL)
		return (-1);

	if (index == 0)
	{
		dlistint_t *temp = *head;
		*head = (*head)->next;

		if (*head != NULL)
			(*head)->prev = NULL;

		free(temp);
		return (1);
	}
	current = *head;

	for (i = 0; i < index; i++)
	{
		if (current == NULL)
			return (-1);
		current = current->next;
	}
	if (current == NULL)
	return (-1);

	if (current->prev != NULL)
		current->prev->next = current->next;
	if (current->next != NULL)
		current->next->prev = current->prev;

	free(current);

	return (1);
}
