#include "main.h"
/**
 *print_triangle - Do something
 *Return: Return something
 *@size: do something
 */
void print_triangle(int size)
{
int i, j, k;
if (size <= 0)
_putchar('\n');
for (i = size; i > 0; i--)
{
for (j = 1; j < i; j++)
{
_putchar(' ');
}
for (k = size; k >= i; k--)
{
_putchar('#');
}
_putchar('\n');
}
}
