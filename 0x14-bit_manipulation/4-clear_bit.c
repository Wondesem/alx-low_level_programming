#include "main.h"
/**
 * clear_bit - sets a value of bit at given index
 * @n: pointer to bit
 * @index: an index of a given bit
 * Return: 1 if worked or -1 if error
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
unsigned long int set;
if (index > (sizeof(unsigned long int) * 8 - 1))
return (-1);
set = ~(1 << index);
*n = *n & set;
return (1);
}
