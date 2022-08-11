#include "lists.h"
#include <stdlib.h>
#include <string.h>
/**
 * dstrlen - calculates string length
 *
 * @str: character string
 * Return: number of nodes
 */
size_t dstrlen(char *str)
{
size_t i;
for (i = 0; str[i]; i++)
	;
return (i);
}
/**
 * add_node - adds the new nod to linked list
 * @head: head of linked list
 * @str: character string
 * Return: new nodes
 */
list_t *add_node(list_t **head, const char *str)
{
list_t *addnew;
if (addnew == NULL)
return (NULL);
addnew = malloc(sizeof(list_t));
if (addnew == NULL)
return (NULL);
addnew->str = strdup(str);
if (!(addnew->str))
{
free(addnew);
return (NULL);
}
addnew->len = dstrlen(addnew->str);
addnew->next = *head;
return (addnew);
}

