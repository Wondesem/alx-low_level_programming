#include "lists.h"
/**
 * print_listint - prints all the elements of a listint_t list
 * @h: pointer to listint
 * Return: the number of nodes
 */
size_t print_listint(const listint_t *h)
{
unsigned int number = 0;
while (h)
{
printf("%d\n", h->n);
number++;
h = h->next;
}
return (number);
}
