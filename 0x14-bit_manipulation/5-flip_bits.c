#include "main.h"
/**
 * flip_bits - flips bit of a number
 * @n: a number to be flipped
 * @m: number after flip
 * Return: flipped number
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
unsigned long int xor = n ^ m, bits = 0;
while (xor > 0)
{
bits += (xor & 1);
xor >>= 1;
}
return (bits);
}

