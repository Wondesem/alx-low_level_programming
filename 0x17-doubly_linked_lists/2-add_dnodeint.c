#include "lists.h"
#include<stdio.h>
#include<stdlib.h>
/**
 * add_dnodeint_end - adds a node to the end of a linked list
 * @head: double pointer to the beginning of the linked list
 * @n: value to add to new node
 * Return: pointer to the new node, or NULL on failure
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
dlistint_t *new;
if (!head)
return (NULL);
new = malloc(sizeof(dlistint_t));
if (!new)
return (NULL);
new->n = n;
new->next = *head;
new->prev = NULL;
if (*head)
(*head)->prev = new;
*head = new;
return (new);
}
