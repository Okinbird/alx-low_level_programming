#include "hash_tables.h"

/**
 * hash_table_set - creates a new hash node
 * @ht: hash table
 * @key: string used to generate value
 * @value: size of the hash table
 *
 * Return: 1 on succes , 0 on failuer
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
  hash_node_t *hn, *tmp;
  char *new_val;
  unsigned long int index;

  if (ht == NULL || ht->array == NULL || ht->size == 0 ||
      key == NULL || strlen(key) == 0 || value == NULL)
    return (0);

  index = key_index((const unsigned char *)key, ht->size);
  tmp = ht->array[index];

  while (tmp != NULL)
  {
    if (strcmp(tmp->key, key) == 0)
    {
      new_val = strdup(value);
      if (new_val == NULL)
	return (0);
      free(tmp->value);
      tmp->value = new_val;
      return (1);
    }
    tmp = tmp->next;
  }

  hn = hash_node_maker(key, value);
  if (hn == NULL)
    return (0);
  hn->next = ht->array[index];
  ht->array[index] = hn;
  return (1);
}

/**
 * hash_node_maker - creates a new hash node
 * @key: string used to generate value
 * @value: size of the hash table
 *
 * Return: newnode or null if fails
 */
hash_node_t *hash_node_maker(const char *key, const char *value)
{
  hash_node_t *new_node = malloc(sizeof(hash_node_t));

  if (new_node == NULL)
    return (NULL);

  new_node->key = strdup(key);
  if (new_node->key == NULL)
  {
    free(new_node);
    return (NULL);
  }
  new_node->value = strdup(value);
  if (new_node->value == NULL)
  {
    free(new_node->key);
    free(new_node);
    return (NULL);
  }
  new_node->next = NULL;
  return (new_node);
}
