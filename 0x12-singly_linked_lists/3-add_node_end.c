#include "lists.h"
#include <stdlib.h>
#include <string.h>
/**
 * add_node_end - adds node to the end of list
 * @head: the first node of the list
 * @str: the character string pointer
 * Return: pointer to new node
 */
list_t *add_node_end(list_t **head, const char *str)
{
char *dup;
int len;
list_t *new, *last;
new = malloc(sizeof(list_t));
if (new == NULL)
return (NULL);
dup = strdup(str);
if (str == NULL)
{
free(new);
return (NULL);
}
for (len = 0; str[len];)
len++;
new->str = dup;
new->len = len;
ew->next = NULL;
if (*head == NULL)
*head = new;
else
{
last = *head;
while (last->next != NULL)
last = last->next;
last->next = new;
}
return (*head);
}
