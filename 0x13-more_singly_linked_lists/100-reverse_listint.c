#include "lists.h"
/**
 * reverse_listint - reverses a listint_t linked list.
 * @head: a pointer of first pointer in list
 * Returen: first pointer of reversed linked list
 */
listint_t *reverse_listint(listint_t **head)
{
listint_t *previous, *next;
if (head == NULL || *head == NULL)
return (NULL);
if ((*head)->next == NULL)
return (*head);
previous = NULL;
while (*head != NULL)
{
next = (*head)->next;
(*head)->next = previous;
previous = *head;
*head = next;
}
*head = previous;
return (*head);
}
