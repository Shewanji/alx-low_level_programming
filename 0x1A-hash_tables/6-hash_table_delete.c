#include "hash_tables.h"

/**
 * hash_table_delete - Deletes a hash table and frees all memory
 * @ht: The hash table to delete
 */
void hash_table_delete(hash_table_t *ht)
{
	if (ht == NULL)
		return;

	hash_table_t *head = ht;
	unsigned long int i;

	/* Traverse the hash table array */
	for (i = 0; i < ht->size; i++)
	{
		hash_node_t *current = ht->array[i];
		hash_node_t *next;

		/* Traverse the linked list at the current index */
		while (current != NULL)
		{
			next = current->next;
			free(current->key);
			free(current->value);
			free(current);
			current = next;
		}
	}

	free(head->array);
	free(head);
}
