#include "lists.h"
#include <stdlib.h>

/**
 * free_list - Frees a lit_t list
 * @head: A pointer to the list_t list
 *
 * Retrun: void.
 */
void free_list(list_t *head)
{
list_t *tmp;

while (head != NULL)
{
tmp = head->next;
free(head->str);
free(head);
head = tmp;
}
}
