#include "main.h"
/**
 * main -prints lower case alphabets
 * followed by new line
 *
 */
void print-alphabet(void)
{	char ch;
	for (ch = 'a'; ch <= 'z'; ch++)
		_putchar(ch);
	putchar('\n');
}
