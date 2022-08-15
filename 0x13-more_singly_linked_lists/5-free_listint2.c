#include "lists.h"
#include <stdlib.h>

/**
 * free_listint2 - Frees a listint_t list
 * @head: A pointer to the head's address of the list
 *
 * Return: Void
 */
void free_listint2(listint_t **head)
{
listint_t *next;

if (head == NULL)
return;
while (*head != NULL)
{
next = (*head)->next;
free(*head);
*head = next;
}
}
