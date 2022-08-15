#include "lists.h"
#include <stdlib.h>

/**
 * insert_nodeint_at_index - Inserts a new node to the list
 *                           at a given position
 * @head: A pointer to the head's address of the list
 * @idx:  The index of the list where the new node
 *        should be added - indices start at 0
 * @n:  The integer for the new node to contain
 *
 * Return: If the function fails - NULL
 *         Or The address of the new node
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
listint_t *new, *copy = *head;
unsigned int i;

new = malloc(sizeof(listint_t));
if (new == NULL)
return (NULL);

new->n = n;

if (idx == 0)
{
new->next = copy;
*head = new;
return (new);
}
for (i = 0; i < (idx - 1); i++)
{
if (copy == NULL || copy->next == NULL)
return (NULL);

copy = copy->next;
}
new->next = copy->next;
copy->next = new;

return (new);
}
