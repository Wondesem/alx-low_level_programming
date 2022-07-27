#include <stdio.h>
/**
 * main - prints the number of arguments passed into it
 * @argc: number of array members
 * @argv: the array of command input
 * Return: always 0
 */
int main(int argc, char __attribute__((unused)) *argv[])
{
	printf("%d\n", argc - 1);
	return (0);
}

