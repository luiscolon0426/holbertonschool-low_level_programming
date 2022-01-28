#include "hash_tables.h"
/**
 * hash_table_set - function add an element to hash table
 * @ht: the hash table you want to add
 * @key: key
 * @value: value with the key, value duplicated
 *
 * Return: 1 on succedd, 0 on fail
 **/
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *new_node = NULL;
	char *key_cp, *value_cp;
	unsigned long int idx = 0;

	if ((strcmp(key, "") == 0 || key == NULL || value == NULL || ht == NULL))
		return (0);

	key_cp = strdup(key);
	value_cp = strdup(value);

	new_node = malloc(sizeof(hash_node_t));
	if (new_node == NULL)
		return (0);
	new_node->key = key_cp;
	new_node->value = value_cp;

	idx = key_index((const unsigned char *)key, ht->size);

	if (ht->array[idx] == NULL)
		new_node->next = NULL;
	else
		new_node->next = ht->array[idx];

	ht->array[idx] = new_node;

	return (1);
}
