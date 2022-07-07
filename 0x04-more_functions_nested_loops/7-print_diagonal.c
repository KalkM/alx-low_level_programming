#include "main.h"
/**
 *print_diagonal - prints \ diagonally n times
 *Return: Return something
 *@n: do something
 */
void print_diagonal(int n)
{
int i, j;
if (n <= 0)
{
_putchar('\n');
}
for (i = 0; i < n; i++)
{
for (j = 0; j < i; j++)
{
_putchar(' ');
}
if (n > 0)
{
_putchar('\');
_putchar('\n');
}
}
}
