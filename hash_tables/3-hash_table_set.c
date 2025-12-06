#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "hash_tables.h"

/**
* hash_table_set - adds an element to the hash table
* @ht: pointer to the hash table
* @key: the key to add (cannot be an empty string)
* @value: the value associated with the key (must be duplicated)
*
* Description: This function adds a key/value pair to the hash table.
* If the key already exists, it updates the value. In case of a collision,
* the new node is added at the beginning of the linked list.
*
* Return: 1 on success, 0 on failure (e.g., memory allocation failure).
*/

int hash_table_set(hash_table_t *ht, const char *key, const char *value)

{
	unsigned long int index;

	hash_node_t *new_node, *tmp;

	if (ht == NULL || key == NULL || *key == '\0')
		return (0);

	index = key_index((const unsigned char *)key, ht->size);
	tmp = ht->array[index];

	while (tmp)
	{
		if (strcmp(tmp->key, key) == 0)
		{
			free(tmp->value);
			tmp->value = strdup(value);
			return (1);
		}
		tmp = tmp->next;
	}
	new_node = malloc(sizeof(hash_node_t));

	if (new_node == NULL)
		return (0);

	new_node->value = strdup(value);

	if (!new_node->value)
	{
		free(new_node->key);
		free(new_node);
		return (0);
	}

	new_node->next = ht->array[index];
	ht->array[index] = new_node;

	return (1);
}
