#include "main.h"

/**
 * print_line - draws astraight line on terminal
 * @n: numbers of character _ should be printed
 */
void print_line(int n)
{
	int a;

	if (n > 0)
	{
		for (a = 0; a < n; a++)
			_putchar('_');
	}
	_putchar('\n');
}
