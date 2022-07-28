#include "main.h"
#include <stdlib.h>
/**
 * string_nconcat - concatenates two strings.
 * @s1: first string to concatenate
 * @s2: second string to concatenate
 * @n: the length greater or equal to s2 length
 * Return: newly allocated pointer
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
unsigned int leng1 = n, i;
char *chptr;

if (s1 == NULL)
s1 = "";
if (s2 == NULL)
s2 = "";
for (i = 0; s1[i] ; i++)
leng1++;
chptr = (char *)malloc(sizeof(char) * leng1 + 1);
if (chptr == NULL)
return (NULL);
leng1 = 0;
for (i = 0; s2[i]; i++)
chptr[leng1++] = s1[i];
for (i = 0; s2[i] && i < n; i++)
chptr[leng1++] = s2[i];
chptr[i] = '\0';
return (chptr);
}

