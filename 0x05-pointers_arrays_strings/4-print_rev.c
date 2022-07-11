#include "main.h"
/**
 *print_rev - prints the string in reverse order
 *@s: accepts the string
 *Return: nothing
 */
void print_rev(char *s)
{
int c, i;
i = 0;
for (i = 0; s[i] != '\0'; i++)
{
}
i--;
for (c = i; c != -1; c--)
{
_putchar(s[c]);
}
_putchar('\n');
}
