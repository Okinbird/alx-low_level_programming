#include "hash_tables.h"

/**
 * hash_table_get - Retrieve the value associated with
 *                  a key in a hash table.
 * @ht: A pointer to the hash table.
 * @key: The key to get the value of.
 *
 * Return: If the key cannot be matched - NULL.
 *         Otherwise - the value associated with key in ht.
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
  unsigned long int index;
  hash_node_t *tmp;

  if (ht == NULL || ht->array == NULL || ht->size == 0 ||
      key == NULL || strlen(key) == 0)
    return (NULL);
  index = key_index((const unsigned char *)key, ht->size);
  tmp = ht->array[index];
  while (tmp != NULL)
    {
      if (strcmp(tmp->key, key) == 0)
	return (tmp->value);
      tmp = tmp->next;
    }
  return (NULL);
}
