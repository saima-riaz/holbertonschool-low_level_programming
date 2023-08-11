#include "hash_tables.h"

/**
 * key_index - give the index of a key
 * @key: key value to check for index
 * @size: size of array of the hash table
 *
 * Description: find the index with key arg within size for array
 * Return: index
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int hash_value;

	if (key == NULL || size == 0)
		return (0);

	hash_value = hash_djb2(key);
	return (hash_value % size);
}
