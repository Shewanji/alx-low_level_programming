#include "hash_tables.h"

/**
 * hash_table_create - Creates a hash table
 * @size: The size of the hash table array
 *
 * Return: Pointer to the newly created hash table,
 *or NULL if an error occurred
 */

hash_table_t *hash_table_create(unsigned long int size)
{
	 unsigned long int i;
	/* Allocate memory for the hash table structure */
	hash_table_t *hash_table = malloc(sizeof(hash_table_t));

	if (hash_table == NULL)
	{
		return (NULL); /* Unable to allocate memory */
	}

	/* Allocate memory for the array */
	hash_table->array = malloc(size * sizeof(hash_node_t *));
	if (hash_table->array == NULL)
	{
		free(hash_table);
		return (NULL); /* Unable to allocate memory */
	}

	/* Initialize the size and array elements */
	hash_table->size = size;
	for (i = 0; i < size; i++)
	{
		hash_table->array[i] = NULL;
	}

	return (hash_table);
}
