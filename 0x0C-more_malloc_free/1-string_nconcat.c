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
unsigned int leng1, leng2, lenght, i, j;
char *chptr;

if (s1 == NULL)
{
s1 = "";
}
if (s2 == NULL)
{
s2 = "";
}
leng1 = 0;
for (i = 0; s1[i] != '\0'; i++)
{leng1++;
}
leng2 = 0;
for (i = 0; s2[i] != '\0'; i++)
{leng2++;
}
if (n >= leng2)
{n = leng2; }
length = leng1 + n;
chptr = malloc(sizeof(char) * length);
if (chptr == NULL)
{return (NULL);
}
for (i = 0; leng1; i++)
{chptr[i] = s1[i];
}
for(j = 0; i < length; j++; i++)
{chptr[i] = s2[j];
}
chptr[i] = '\0';
return (chptr);
}

