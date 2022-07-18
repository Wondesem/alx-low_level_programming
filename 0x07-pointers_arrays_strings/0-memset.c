#include "main.h"
/**
 * *_memset - fills memory with a constant byte
 * @s: points memory area to be filled
 * @b: constant byte
 * @n: byte of memory area filled
 * Return: returns pointer to the memory area s
 */
char *_memset(char *s, char b, unsigned int n)
{
unsigned int i;
i = 0;
while (i < n)
{s[i] = b;
i++;
}
return (0);
}
