#include "main.h"

/**
 * print_numbers -prints numbers from 0 to 9
 * followed by new line
 * Return: always 0
 */
void print_numbers(void)
{
int  a;

a = 0;
while (a < 10)
{
_putchar((a % 10) + '0');
a++;
}

_putchar('\');
}
