#include "hash_tables.h"

/**
 * hash_table_print - prints a hash table
 * @ht: pointer to the hash table
 */

void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i;
	hash_node_t *table;
	char *sep;

	/* Check if the hash table is NULL */
	if (ht == NULL)
		return;
	printf("{"); /* print opening brace */

	/* Initialize separator */
	sep = "";
	/* Iterate through the array and print key-value pairs */
	for (i = 0; i < ht->size; i++)
	{
		table = ht->array[i];
		while (table != NULL)
		{
			/* Print key-value pair with appropriate formatting */
			printf("%s'%s': '%s'", sep, table->key, table->value);
			sep = ", ";
			table = table->next;
		}
	}
	/* Print closing brace and newline character */
	printf("}\n");
}
