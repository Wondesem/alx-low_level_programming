#include <stdio.h>
#include <unistd.h>
#include <string.h>

/**
 *  main - Prints out the last part of a quote in the standard error.
 *
 *  Return: 1 if success.
 */

int main(void)
{	int s;
	s = strlen("and that piece of art is useful\" - Dora Korpar, 2015-10-19\n");
	write(2, "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n", s);
	return (1); }
