#include "lists.h"
/**
 * list_len - prints the number of list members
 * @h: the head pointer
 * Return: number of list elements
 */
size_t list_len(const list_t *h)
{
const list_t *ptr;
size_t i;
ptr = h;
for (i = 0; ptr != NULL; i++)
ptr = ptr->next;
return (i);
}
