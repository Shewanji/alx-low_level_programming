#include "hash_tables.h"

/**
 * hash_table_print - Prints the contents of a hash table
 * @ht: The hash table to print
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned int count;
	unsigned long int i;

	if (ht == NULL)
		return;

	count = 0;

	printf("{");

	/* Traverse the hash table array */
	for (i = 0; i < ht->size; i++)
	{
		hash_node_t *current = ht->array[i];

		/* Traverse the linked list at the current index */
		while (current != NULL)
		{
			/* Print comma separator if needed */
			if (count > 0)
				printf(", ");

			/* Print the key/value pair */
			printf("'%s': '%s'", current->key, current->value);

			current = current->next;
			count++;
		}
	}

	printf("}\n");
}
