#include "lists.h"
#include <stdlib.h>
#include <string.h>
/**
 * dstrlen - finds the string lenght
 * @str: the character string
 * Return: the lengh of string
 */
size_t dstrlen(char *str)
{
size_t i;
for (i = 0; str[i]; i++)
	;
return (i);
}
/**
 * add_node_end - adds node to the end of list
 * @head: the first node of the list
 * @str: the character string pointer
 * Return: pointer to new node
 */
list_t *add_node_end(list_t **head, const char *str)
{
list_t *newnode, tmp;
if (str == NULL)
return (NULL);
newnode = malloc(sizeof(list_t));
if (newnode == NULL)
return (NULL);
newnode->str = strdup(str);
if (newnode->str == NULL)
{
free(newnode);
return (NULL);
}
newnode->len = dstrlen(newnode->str);
newnode->next = NULL;
if (*head == NULL)
{
*head = newnode;
return (newnode);
}
tmp = *head;
while (tmp->next)
tmp = tmp->next;
tmp->next = newnode;
return (newnode);
}



