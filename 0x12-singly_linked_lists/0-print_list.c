#include "lists.h"
#include <stdio.h>
/**
 * print_list - prints all the elements of a list_t list.
 * @h: head of the linked list
 * Return: number of nodes
 */
size_t print_list(const list_t *h)
{
const list_t *tmp;
size_t i = 0;
if (h->str == NULL)
{
printf("[0] (nil");
}
else
{
tmp = h;
while (tmp != NULL)
{
printf("[%d] %s", tmp->len, tmp->str);
tmp = tmp->next;
i++;
}
}
return (i);
}
