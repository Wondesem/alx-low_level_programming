#include "lists.h"
/**
 * pop_listint - deletes the head node of a listint_t linked list
 * @head: pointer to pointer
 * Return: head node’s data (n)
 */
int pop_listint(listint_t **head)
{
listint_t headnode;
int n;
if (head == NULL || *head == NULL)
return (0);
headnode = *head;
*head = neadnode->next;
n = headnode->n;
free(headnode);
return (n);
}

