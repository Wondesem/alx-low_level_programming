#include <stdio.h>
#include <stdlib.h>
/**
 * main - prints minimum number of coins to make change for an amount of money.
 * @argc: number of arguments passed to the function
 * @argv: argument vector of pointers to strings
 *
 * Return: 0 if no errors, else 1
 */
int main(int argc, char *argv[])
{
int cents, change;
if (argc != 2)
{
printf("Error\n");
return (1);
}
cents = atoi(argv[1]);
if (cents < 0)
{
printf("%d\n", 0);
return (0);
}
if (cents % 25 >= 0)
{
change = cents / 25;
cents = cents % 25;
}
if (cents % 10 >= 0)
{
change += cents / 10;
cents = cents % 10;
}
if (cents % 5 >= 0)
{
change += cents / 5;
cents = cents % 5;
}
if (cents % 2 >= 0)
{
change += cents / 2;
cents = cents % 2;
}
if (cents % 1 >= 0)
{
change += cents / 1;
}
printf("%d\n", change);
return (0);
}

