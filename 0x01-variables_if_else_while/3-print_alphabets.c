#include <stdio.h>
/**
 * main - prints lower case
 * then uper case alphabet
 * followed by new line
 *
 * Return: always 0 (success)
 */
int main(void)
{int my_alpha;
for (my_alpha = 'a'; my_alpha <= 'z'; my_alpha++)
	putchar(my_alpha);
for (my_alpha = 'A'; my_alpha <= 'Z'; my_alpha++)
	putchar(my_alpha);
putchar('\n');
return (0); }

