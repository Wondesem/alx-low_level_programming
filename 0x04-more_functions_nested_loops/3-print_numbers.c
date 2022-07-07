#include "main.h"

/**
 * print_numbers -prints numbers from 0 to 9
 * followed by new line
 */
void print_numbers(void)
{
	for (a = 0; a <= 9; a++)
	{
		_putchar(a % 10 + '0');
	}
	_putchar('\n');
}
