#include "main.h"
/**
 * swap_int - swaps the values of two integers
 * @a: first  integer to be swap
 * @b: second interger to be swap
 */
void swap_int(int *a, int *b)
{
int n;
n = *a;
*a = *b;
*b = n;
}
