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
int size, i = 0;
int *p;
if (min > max)
{
return (NULL);
}
size = (max - min) + 1;
p = malloc(sizeof(int) * size);
if (!p)
{
free(p);
return (NULL);
}
for (i = 0; min <= max; min++, i++)
{
p[i] = min;
}
return (p);

}
