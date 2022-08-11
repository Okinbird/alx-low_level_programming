#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
  list_t *head;
  list_t *new;
  list_t hello = {"Eyebiokin", 9, NULL};
  size_t n;

  head = &hello;
  new = malloc(sizeof(list_t));
  if (new == NULL)
    {
      printf("Error\n");
      return (1);
    }
  new->str = strdup("Olayinka");
  new->len = 9;
  new->next = head;
  head = new;
  n = print_list(head);
  printf("-> %lu elements\n", n);

  printf("\n");
  free(new->str);
  new->str = NULL;
  n = print_list(head);
  printf("-> %lu elements\n", n);

  free(new);
  return (0);
}
