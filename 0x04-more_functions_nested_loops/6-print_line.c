#include "main.h"
/**
 *print_line- prints _ n times
 *@n: number of _
 * Return: something
 */
void print_line(int n)
{
int i;
for (i = 0; i < n; i++)
_putchar('_');
if (n <= 0)
_putchar('\n');
}
