#include "lists.h"
#include <stdio.h>

/**
 * print_list - Prints all the elements of a list_t list.
 * @h: Pointer to the start of the list
 *
 * Return: Number of nodes in the list
 */
size_t print_list(const list_t *h)
{
  size_t nodes = 0;

  while (h != NULL)
    {
      if (h->str == NULL)
	printf("[0] (nil)\n");
      else
	printf("[%d] %s\n", h->len, h->str);
      nodes++;
      h = h->next;
    }
  return (nodes);
}
