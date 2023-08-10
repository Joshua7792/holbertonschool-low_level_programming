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

	if (ht == NULL)
		return;
	printf("{");
	sep = "";
	for (i = 0; i < ht->size; i++)
	{
		table = ht->array[i];
		while (table != NULL)
		{
			printf("%s'%s': '%s'", sep, table->key, table->value);
			sep = ", ";
			table = table->next;
		}
	}
	printf("}\n");
}
