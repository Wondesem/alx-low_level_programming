#include "main.h"
/**
 * get_bit - returns the value of a bit at a given index.
 * @n: number whose index of a bit to return
 * @index: the index of a number
 * Return: the value of the bit at index index or -1
 */
int get_bit(unsigned long int n, unsigned int index)
{
unsigned long int divisor, check;
if (index > (sizeof(unsigned long int) * 8 - 1))
return (-1);
divisor = 1 << index;
check = n & divisor;
if (check == divisor)
return (1);
return (0);
}

