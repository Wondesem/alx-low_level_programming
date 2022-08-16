#include "lists.h"
/**
 * pop_listint - deletes the head node of a listint_t linked list
 * @head: pointer to pointer
 * Return: head node’s data (n)
 */
int pop_listint(listint_t **head)
{
listint_t headnode;
int tmp
if (*head == NULL)
return (0);

headnode = *head;
tmp = (*head)->n;
*head = (*head)->next;
free(headnode);
return (headnode);
}
