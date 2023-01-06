#include "hash_tables.h"

/**
 * hash_table_create - pointer to a fuction that creates a hash table
 * @size: size of array
 *
 * Return: pointer to the newly created hash table
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	/* Allocate space for the hash table struct. */
	hash_table_t *table = malloc(sizeof(hash_table_t));
	if (table == NULL)
		return (NULL);
	table->size = size;

	/* Allocate memory for entry busket*/
	table->array = calloc(table->size, sizeof(hash_node_t));
	if (table->array == NULL)
	{
		free(table);
		return (NULL);
	}

	return (table);
}
