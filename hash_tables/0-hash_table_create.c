#include "hash_tables.h"

/**
 * hash_table_create - Creates a new hash table.
 * @size: The size of the hash table's array.
 * Return: A pointer to the newly created hash table,
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	unsigned long int i;

	/* Allocate memory for the hash table structure */
	hash_table_t *table = malloc(sizeof(hash_table_t));

	if (table == NULL)
		return (NULL);

	/* Set the size of the hash table */
	table->size = size;

	/* Allocate memory for the array of hash_node_t pointers */
	table->array = malloc(sizeof(hash_node_t *) * table->size);

	if (table->array == NULL)
		return (NULL);

	/* Initialize each element of the array to NULL */
	for (i = 0; i < table->size; i++)
		table->array[i] = NULL;

	return (table);
}
