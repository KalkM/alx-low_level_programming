#include "main.h"

/**
 * print_most_numbers - prints numbers 0 to 9 except for 2 and 4
 * Return: Nothing
 */

void print_most_numbers(void)
{
char c = '0';
int n;
n = 0;
while (n != 8)
{
if (c == '2')
{
c++;
}
if (c == '4')
{
c++;
}
_putchar (c);
n++;
c++;
if (n == 8)
_putchar ('\n');
}
return (0);
}
