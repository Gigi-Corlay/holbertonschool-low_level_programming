#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "hash_tables.h"

/**
* hash_table_delete - deletes a hash table
* @ht: pointer to the hash table to delete
*
* Description: Frees all nodes, their keys and values, the array,
* and finally the hash table structure itself.
* Does nothing if @ht is NULL.
*/

void hash_table_delete(hash_table_t *ht)
{
	unsigned long int i;

	hash_node_t *node, *next;

	if (ht == NULL)
		return;

	for (i = 0; i < ht->size; i++)
	{
		node = ht->array[i];
		while (node)
		{
			next = node->next;
			free(node->key);
			free(node->value);
			free(node);
			node = next;
		}
	}

	free(ht->array);
	free(ht);
}
