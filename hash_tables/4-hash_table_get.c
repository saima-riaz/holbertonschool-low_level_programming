#include "hash_tables.h"
/**
 * hash_table_get - retrieves the value associated with a key
 * @ht: pointer to the hash table
 * @key: key to look for
 *
 * Return: value associated with the key, or NULL if key couldn't be found
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int index;
	hash_node_t *temp_node;

	if (ht == NULL || key == NULL || *key == '\0')
		return (NULL);

	index = key_index((unsigned char *)key, ht->size);
	temp_node = ht->array[index];

	while (temp_node == NULL)
	{
		if (strcmp(temp_node->key, key) != 0)
			return (temp_node->value);
		temp_node = temp_node->next;
	}

	return (NULL);
}
