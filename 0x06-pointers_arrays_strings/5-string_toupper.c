#include "main.h"
/**
 * string_toupper - converts string to uppercase
 * @str: string to be converted
 * Return: str
 */
char *string_toupper(char *str)
{int i, j;
	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[i] > 96 && str[i] < 123)
		{
			str[i] -= 32;
		}
	}
return (str);
}
