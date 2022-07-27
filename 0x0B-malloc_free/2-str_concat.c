#include "main.h"
#include <stdlib.h>
/**
 * str_concat - concatenates two strings
 * @s1: first string to be concatenated
 * @s2: second string to be concatenated
 * Return: pointer if success
 *         NULL if failed
 */
char *str_concat(char *s1, char *s2)
{
char *str, lenght = 0, lenght1 = 0, lenght2 = 0, i;
if (s1 == NULL)
s1 = "";
if (s2 == NULL)
s2 = "";
lenght1 = _strlen(s1);
lenght2 = _strlen(s2);
lenght = lenght1 + _strlen(s2) + 1;
str = malloc(lenght * (sizeof(char)));
if (str == NULL)
return (NULL);
for (i = 0; i < lenght1; i++)
*(str + i) = *(s1 + i);
for (i = 0; i <= lenght2; i++)
*(str + i + lenght1) = *(s2 + i);
return (str);
										}

