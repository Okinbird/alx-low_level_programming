#include "lists.h"

/**
 * find_listint_loop - Finds the loop in a linked list
 * @head: A pointer to the head of the listint_t list.
 *
 * Return: If there is no loop - NULL.
 *         Or the address of the node where the loop starts.
 */
listint_t *find_listint_loop(listint_t *head)
{
listint_t *tom, *jerry;

if (head == NULL || head->next == NULL)
return (NULL);

tom = head->next;
jerry = (head->next)->next;

while (jerry)
{
if (tom == jerry)
{
tom = head;

while (tom != jerry)
{
tom = tom->next;
jerry = jerry->next;
}

return (tom);
}

tom = tom->next;
jerry = (jerry->next)->next;
}

return (NULL);
}
