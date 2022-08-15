#include "lists.h"
#include <stdlib.h>

/**
 * pop_listint - Deletes the head node of a listint_t linked list
 * @head: A pointer to the head's address of the list
 *
 * Return: If the linked list is empty - 0
 *         And the head node's data (n)
 */
int pop_listint(listint_t **head)
{
listint_t *first;
int ret;

if (*head == NULL)
return (0);

first = *head;
*head = (*head)->next;
ret = first->n;

free(first);

return (ret);
}
