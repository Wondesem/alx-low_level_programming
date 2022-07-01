#include <stdio.h>
/**
 * main -prints lower case alphabet in reversed order
 * followed by new line
 * return: always 0 (success)
 */
int main(void)
{	char ch;
	for (ch = 'z'; ch = > 'a'; ch--)
	{	putchar(ch);
	}
	putchar('\n');
	return (0);
}

