#include "lists.h"

/**
 * reverse_listint - Reverses a listint-t linked list
 * @head: A pointer to the head's address of the list
 *
 * Return: A pointer to the first node of the reversed list
 */
listint_t *reverse_listint(listint_t **head)
{
listint_t *previous, *next;

if (head == NULL || *head == NULL)
return (NULL);

if ((*head)->next == NULL)
return (*head);
previous = NULL;
while (*head != NULL)
{
next = (*head)->next;
(*head)->next = previous;
previous = *head;
*head = next;
}
*head = previous;
return (*head);
}
