#include "main.h"
/**
 *print_square - Do something
 *Return: Return something
 *@n: do something
 */
void print_square(int n)
{
int i, j;
if (n <= 0)
{
_putchar('\n');
}
for (i = 0; i < n; i++)
{
for (j = 0; j < n; j++)
{
_putchar('#');
}
_putchar('\n');
}
}
