#include "hash_tables.h"

/**
 * hash_table_delete - deletes a hash table
 * @ht: pointer to the hash table
 */

void hash_table_delete(hash_table_t *ht)
{
	unsigned long int i;
	hash_node_t *table;

	/* Check if the hash table is NULL */
	if (ht == NULL)
		return;

	/* Iterate through the array and free key-value pairs and nodes */
	for (i = 0; i < ht->size; i++)
	{
		table = ht->array[i];
		while (table != NULL)
		{
			/* Free key, value, and node */
			free(table->key);
			free(table->value);
			free(table);
			table = table->next;
		}
	}

	/* Free the array and the hash table structure itself */
	free(ht->array);
	free(ht);
}
