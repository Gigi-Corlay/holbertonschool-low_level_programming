#include "hash_tables.h"

/**
* key_index - Get the index of a key in the hash table
* @key: The key to hash
* @size: The size of the hash table array
*
* Return: The index to store the key in the hash table array
*/

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int hash = hash_djb2(key);

	return (hash % size);
}
