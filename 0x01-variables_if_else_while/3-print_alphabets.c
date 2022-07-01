#include <stdio.h>
/**
 * main - prints lower cases and upper cases respectively
 * then followed by new line
 *
 * Return: always reteurns 0 (success)
 */
int main(void)
{char luAlphabet;
	for (luAlphabet = 'a'; luAlphabet = < 'z'; luAlphabet++)
		putchar(luAlphabet);
	for (luAlphabet = 'A'; luAlphabet = < 'Z'; luAlphabet++)
		putchar(luAlphabet);
	putchar('\n');
return (0);
}
