#include "lists.h"
#include <stdlib.h>
/**
 * free_list - clear the list in the link
 * @head: head of a list to be freed
 * Return: void
 */
void free_list(list_t *head)
{
list_t *present, next;
present = head;
while (present != NULL)
{
next = present->next;
free(present->next);
free(present);
present = next;
}
}
