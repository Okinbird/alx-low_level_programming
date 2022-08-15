#include "lists.h"
#include <stdlib.h>

/**
 * add_nodeint - Addsa new node at the beginning of a listint_t list
 * @h: A pointer to the head's address in the list
 * @n: Integer added to the list
 *
 * Return: The address of the new element
 *         Or NULL - if it failed
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
listint_t *new;

if (head == NULL)
return (NULL);

new = malloc(sizeof(listint_t));

if (new == NULL)
return (NULL);

new->n = n;
new->next = *head;
*head = new;

return (new);
}
