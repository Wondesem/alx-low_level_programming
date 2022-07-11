#include "main.h"
/**
 * rev_string - reverses a string
 * @s: string to be reversed
 */
void rev_string(char *s)
{int i, leng;
i = 0;
char ch;
while (s[i] != '\0')
{i++;
}
leng = i;
for (i = 0; i < (leng / 2); i++)
{ch = s[leng - i - 1];
s[leng - i - 1] = s[i]
s[i] = ch;
}
}
