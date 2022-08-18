#include "main.h"
/**
 * get_endianness - checks the endianness
 * Return: 0 if big endianness, 1 little indianness
 */
int get_endianness(void)
{
int x;
char *y;
x = 1;
y = (char *)&x;
return (*y);
}

