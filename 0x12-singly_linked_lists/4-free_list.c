#include "lists.h"
#include <stdlib.h>
/**
 * free_list - clear the list in the link
 * @head: head of a list to be freed
 * Return: void
 */
void free_list(list_t *head)
{
list_t *tmp;
while (head)
{
tmp = head->next;
free(head->str);
free(head);
head = tmp;
}
}
