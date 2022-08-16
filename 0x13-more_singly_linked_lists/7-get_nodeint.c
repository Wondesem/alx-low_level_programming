#include "lists.h"
/**
 * get_node-at_index
 * @head: pointer to the address of head
 * @index: index to locate node starting at 0
 * Return: returns null if not exists otherwise node
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
unsigned int node;
for (node = 0; node < index; node++)
{
if (head == NULL)
return (NULL);
head = head->next;
}
return (head);
}
