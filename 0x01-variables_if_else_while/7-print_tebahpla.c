#include <stdio.h>
/**
 * main - prints the lowercase alphabet
 * in reverse order
 * followed by new line
 *
 * Return: always 0 (success)
 */
int main(void)
{char my_char;
for (my_char = 'a'; my_char <= 'z'; my_char--)
{
	putchar(my_char); }
putchar('\n');
return (0); }
