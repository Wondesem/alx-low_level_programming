#ifndef LISTS_H
#define LISTS_H
#include <stddef.h>
/**
 * struct lists_s - lists singly linked lists
 * @str: character string in the list
 * @len: lenght of linked list strengs
 * @next: the next pointer in node link
 */
typedef struct list_s
{
char *str;
unsigned int len;
struct list_s *next;
} list_t;

int _putchar(char c);
size_t print_list(const list_t *h);
size_t list_len(const list_t *h);
list_t *add_node(list_t **head, const char *str);
list_t *add_node_end(list_t **head, const char *str);
void free_list(list_t *head);
#endif /* LISTS_H */
