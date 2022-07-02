#include <stdio.h>
/**
 * main - prints all lower case
 * alphabet except e and q
 * followed by new line
 *
 * Return: awlways 0 (success)
 */
int main(void)
{char ch;
for (ch = 'a'; ch <= 'z'; ch++)
{
if (ch != 'e' && ch != 'q')
	putchar(ch);
}
puchar('\n');
return (0); }
