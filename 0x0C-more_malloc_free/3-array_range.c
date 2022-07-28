#include "main.h"
#include <stdlib.h>
/**
 * array_range - creates an array of integers
 * @min: the minimun range in the array
 * @max: maximum range in the array
 * Return:the pointer to the newly created array
 */
int *array_range(int min, int max)
{
int i, j, *k;
if (min > max)
return (NULL);
j = max - min + 1;
k = malloc(sizeof(int) * j);
if (k == NULL)
{
return (NULL);
}
for (i = 0; i < j; i++; min++)
{
k[i] = min;
}
return (k);
}
