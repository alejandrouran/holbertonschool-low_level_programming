#include "hash_tables.h"

/**
 * hash_table_get - retrieves a value associated with a key
 * @ht: want to look into
 * @key: the key
 * Return: value
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int i = 0;
	hash_node_t *l = NULL;

	if (ht == NULL || key == NULL)
		return (NULL);

	i = key_index((unsigned char *) key, ht->size);
	l = ht->array[i];

	if (l == NULL)
		return (NULL);

	while (strcmp(key, l->key) != 0)
		l = l->next;

	return (l->value);
}
