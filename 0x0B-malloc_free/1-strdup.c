#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * _strdup - duplicate string
 * @str: string to be copied
 * Return: return pointer to duplicated string
 *         NULL if str is NULL
 */
char *_strdup(char *str)
{
	int i, j;

	char *srg;

		if (str == NULL)
		{
			return (NULL);
		}
	for (i = 0; str[i]; i++)
		;
	j++;
	srg = malloc(i * sizeof(char));
	if (srg == NULL)
	{
		return (NULL);
	}
	for (j = 0; j < i; j++)
	{
		srg[j] = str[j];
	}
	return (srg);

}
