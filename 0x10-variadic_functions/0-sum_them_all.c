#include <stdarg.h>
#include "variadic_functions.h"
/**
 * sum_them_all - returns the sum of all its parameters.
 * @n: number of parameters
 * Return: sum of all pararmeters
 */
int sum_them_all(const unsigned int n, ...)
{
va_list args;
unsigned int i, sum;

i = sum = 0;
va_start(args, n);
while (i < n)
{
sum += va_arg(args, int);
i++;
}
va_end(args);
return (sum);
}
