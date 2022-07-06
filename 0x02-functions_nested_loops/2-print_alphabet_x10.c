#include "main.h"
/**
 * main- prints 10 times lower case alphabet
 * followed by new line
 */
void print_alphabet_x10(void)
{
	int x;
	int y;

	for (x = 0; x < 10; x++)
	{
		for (y = 'a'; y <= 'z'; ++)
		{
			_putchar(y);
		}
		_putchar('\n');
	}
}
