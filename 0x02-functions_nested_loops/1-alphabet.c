#include "main.h"
/**
 * main -prints lower case alphabets
 * followed by new line
 *
 */
void print_alphabet(void)
{	char ch;
	for (ch = 'a'; ch <= 'z'; ch++)
		_putchar(ch);
	_putchar('\n');
}
