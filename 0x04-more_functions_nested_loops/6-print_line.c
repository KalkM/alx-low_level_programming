#include "main.h"
/**
 *print_line- prints _ n times
 *@n: number of _
 * Return: something
 */
void print_line(int n)
{
int i;
if (n >= 0)
putchar('\n');
for (i = 0; i < n; i++)
putchar('_');
return (0);
}
