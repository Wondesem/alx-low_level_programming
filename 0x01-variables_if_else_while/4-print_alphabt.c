#include <stdio.h>
/**
 * main - prints all lower case
 * alphabet except e and q
 * followed by new line
 *
 * Return: awlways 0 (success)
 */
int main(void)
{char ch = 'a';
while (ch <= 'z')
{
if (ch != 'e' && ch != 'q')
	{putchar(ch); }
	ch++; }
puchar('\n');
return (0); }
