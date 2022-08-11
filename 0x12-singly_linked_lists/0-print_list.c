#include "lists.h"
#include <stdio.h>
/**
 * print_list - prints all the elements of a list_t list.
 * @h: head of the linked list
 * Return: number of nodes
 */
size_t print_list(const list_t *h)
{const list_t *ptr
unsigned int i;
ptr = h;
for (i = 0; ptr; i++)
{
printf("[%u] %s\n", ptr->len, ptr->str);
ptr = ptr->next;
}
return (i);
}
