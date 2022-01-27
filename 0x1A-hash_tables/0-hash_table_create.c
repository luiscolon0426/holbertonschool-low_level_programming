#include "hash_tables.h"
/**
 * hash_table_create - creates a hash table
 * @size: hash table size
 * Return: new table
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *hash_table;
	unsigned long int a;

	hash_table = malloc(sizeof(hash_table_t));
	if (hash_table == NULL)
		return (NULL);
	hash_table->size = size;
	hash_table->array = malloc(sizeof(hash_node_t *) * size);

	if (hash_table->array == NULL)
		return (NULL);

	for (a = 0; a < size; a++)
		hash_table->array[a] = NULL;

	return (hash_table);
}
