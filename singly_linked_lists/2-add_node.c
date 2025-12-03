#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node - adds a new node at the beginning of a list_t list
 * @head: pointer to the head of the list
 * @str: string to duplicate and store in the new node
 *
 * Return: address of the new node, or NULL if it failed
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new;
	char *copy;
	int len = 0, i;

	if (str == NULL)
		return (NULL);

	while (str[len] != '\0')
		len++;

	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);

	copy = malloc(sizeof(char) * (len + 1));
	if (copy == NULL)
	{
		free(new);
		return (NULL);
	}
	for (i = 0; i < len; i++)
		copy[i] = str[i];
	copy[i] = '\0';

	new->str = copy;
	new->len = len;
	new->next = *head;

	*head = new;

	return (new);
}
