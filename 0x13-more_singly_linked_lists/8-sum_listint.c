#include "lists.h"

/**
 * sum_listint - The sum of all the data (n) of a listint_t linked list
 * @head: A pointer to the head of the list
 *
 * Return: If the list is empty - 0
 *         Or Sum of all the data (n)
 */
int sum_listint(listint_t *head)
{
int sum = 0;

while (head != NULL)
{
sum += head->n;
head = head->next;
}
return (sum);
}
