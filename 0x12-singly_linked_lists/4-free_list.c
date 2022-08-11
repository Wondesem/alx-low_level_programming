#include "lists.h"
#include <stdlib.h>
/**
 * free_list - clear the list in the link
 * @head: head of a list to be freed
 * Return: void
 */
void free_list(list_t *head)
{
list_t *current, *next;
current = head;
while (current != NULL)
{
next = current->next;
free(current->str);
free(current);
current = next;
}
}
