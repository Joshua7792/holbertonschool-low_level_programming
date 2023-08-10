#include "hash_tables.h"
/**
 * hash_table_set - function that adds an element of the hash table
 *
 * @key: is the key
 * @value: is the value associated with the key.
 * @ht: is the hash table you want to add or update the key
 *
 * Return: 1 if it succeeded, 0 otherwise
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index;
	hash_node_t *node;

	/* Check for valid hash table, key, and value */
	if (key == NULL || ht == NULL)
		return (0);

	/* Calculate index for the given key */
	index = key_index((unsigned char *)key, ht->size);
	node = ht->array[index];

	/* Handle collisions and update if key exists */
	while (node != NULL)
	{
		if (strcmp(node->key, key) == 0)
		{
			/* Update the value and return success */
			free(node->value);
			node->value = strdup(value);
			return (1);
		}
		node = node->next;
	}

	/* Allocate memory for a new hash node */
	node = malloc(sizeof(hash_node_t));
	if (node == NULL)
		return (0);

	/* Set key, value, and update linked list */
	node->key = strdup(key);
	node->value = strdup(value);
	node->next = ht->array[index];
	ht->array[index] = node;

	return (1);
}
