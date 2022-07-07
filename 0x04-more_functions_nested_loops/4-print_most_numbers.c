#include "main.h"

/**
 * print_most_numbers - prints numbers 0 to 9 except for 2 and 4
 * Return: Nothing
 */

void print_most_numbers(void)
{
int i = 0;
int n;
n = 0;
while (n != 8)
{
if (i == 2)
{
i++;
}
if (i == 4)
{
i++;
}
_putchar ((char)(i + 48));
n++;
i++;
if (n == 8)
_putchar ('\n');
}
return (0);
}
