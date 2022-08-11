#include "list.h"
#include <stdio.h>
/**
 * print_list - prints all the elements of a list_t list.
 * @h: head of the linked list
 * Return: number of nodes
 */
size_t print_list(const list_t *h)
{
if (h == NULL)
printf("The linked list is empty\n");
const list_t *ptr = NULL;
ptr = h;
unsigned int i;
for (i = 0; ptr != NULL; i++)
{
printf("[%u] %s\n", ptr->len, ptr->str);
ptr = ptr->next;
}
return (i);
}
