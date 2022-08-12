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
unsigned int i;
tmp = h;
for (i = 0; tmp; i++)
{
if (tmp->str == NULL)
printf("0] (nil)");
else
printf("[%u] %s\n", tmp->len, tmp->str);
tmp = tmp->next;
}
return (i);
}
