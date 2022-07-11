#include "main.h"
/**
 *rev_string - reverses a string
 *@s: accepts the string
 *Return: Nothing
 */
void rev_string(char *s)
{
int i, j, x, y;
char c[1024];
y = 0;
i = 0;
for (i = 0; s[i] != '\0'; i++)
{
}
i--;
for (j = i; j > -1; j--)
{
c[j] = s[j];
y++;
}
for (x = 0; x <= i; x++)
{
s[x] = c[x];
}
}
