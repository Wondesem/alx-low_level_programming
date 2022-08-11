#include "lists.h"
#include <stdio.h>
/**
 * print_list - prints all the elements of a list_t list.
 * @h: head of the linked list
 * Return: number of nodes
 */
size_t print_list(const list_t *h)
{size_t i = 0;
const list_t *ptr;
ptr = h;
while (ptr)
{
printf("[%d] %s\n", ptr->len, ptr->str);
ptr = ptr->next;
i++;
}
return (i);
}
