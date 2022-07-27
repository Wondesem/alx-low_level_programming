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
	unsigned int i, j, x, y;
	char *Scon;
	for (i = 0; s1[i]; i++)
	{
		if (s1 == NULL)
			s1 == "";
	}
	for (j = 0; s2[j]; j++)
	{
		if (s2 == NULL)
			s2 = "";
	}
	x = i + j +1;
	Scon = malloc(x * sizeof(char));
	for (y = 0; y < i; y++)
		Scon[y] = s1[y];
	for (y = 0; y < j; y++)
		Scon[i+j] = s2[y];
	Scon = '\0';
	return (Scon);
}
