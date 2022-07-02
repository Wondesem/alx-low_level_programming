#include <stdio.h>
/**
 * main - prints all lower case
 * alphabet except e and q
 * followed by new line
 *
 * Return: awlways 0 (success)
 */
int main(void)
{char letter;
for (letter = 'a'; letter <= 'z'; letter++)
{
	if (letter != 'e' && letter != 'q')
	putchar(letter); }
	putchar('\n');
return (0); }
