#include "main.h"
/**
 *puts2 - prints every other character of a string, starting with
 *the first character, followed by a new line.
 *@str: the string
 *Return: Nothing
 */
void puts2(char *str)
{
int i, j;
i = 0;
while (str[i] != '\0')
i++;
for (j = 0; j < i; j++)
{
_putchar(str[j]);
}
_putchar('\n');
}
