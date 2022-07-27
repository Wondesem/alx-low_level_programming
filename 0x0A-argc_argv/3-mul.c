#include <stdlib.h>
#include <stdio.h>
/**
 * main - multiplies two numbers
 *
 * @argc:arguement count
 * @argv:arguement vector
 * Return:0(success)
 */
int main(int argc, char *argv[])
{
(void) argc;
if (*(argv + 1) == '\0' || *(argv + 2) == '\0')
{
printf("Error\n");
return (1);
}
else
printf("%d\n", (atoi(*(argv + 1)) * atoi(*(argv + 2))));
return (0);
}
}

