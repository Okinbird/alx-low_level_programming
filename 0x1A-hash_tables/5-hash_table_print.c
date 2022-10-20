#include "hash_tables.h"

/**
 * hash_table_print - Prints a hash table.
 * @ht: A pointer to the hash table to print.
 *
 * Description: Key/value pairs are printed in the order
 *              they appear in the array of the hash table.
 */
void hash_table_print(const hash_table_t *ht)
{
  unsigned long int i;
  hash_node_t *tmp;
  char flag = 0; /* 0 while no data has been printed yet */

  if (ht == NULL || ht->array == NULL)
    return;
  printf("{");
  for (i = 0; i < ht->size; i++)
    {
      tmp = ht->array[i];
      while (tmp != NULL)
	{
	  if (flag == 1)
	    printf(", ");
	  printf("'%s': '%s'", tmp->key, tmp->value);
	  flag = 1;
	  tmp = tmp->next;
	}
    }
  printf("}\n");
}
