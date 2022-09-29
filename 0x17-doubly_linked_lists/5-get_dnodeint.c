#include "lists.h"

/**
 * get_dnodeint_at_index - Locates a node in a dlistint_t list
 * @head: pointer to the beginning of the list
 * @index: index of the node to locate
 *
 * Return: If the node does not exist - NULL
 *         Or the nth node of the located linked list
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
  unsigned int i;

  if (head == NULL)
    return (NULL);
  if (index == 0)
    return (head);
  for (i = 0; i < index; i++)
    {
      if (head->next == NULL)
	return (NULL);
      head = head->next;
    }
  return (head);
}
