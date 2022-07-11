#include "main.h"
/**
 * rev_string - reverses a string
 * @s: string to be reversed
 */
void rev_string(char *s)
{char chtm;
int i, leng, leng1;
leng = 0;
leng1 = 0;
char chtm;
while (s[leng] != '\0')
{leng++;
}
leng1 = leng - 1;
for (i = 0; i < (leng / 2); i++)
{chtm = s[i];
s[i] = s[leng1];
s[leng1--] = chtm;
}
}
