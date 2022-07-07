#include "main.h"

/**
 * more_numbers- prints 0 - 14 ten times
 * Return: something
 */

void more_numbers(void);
{
int j;
int i = 0;
while (i < 10)
{
for (j = 0; j < 15; j++)
{
if (j > 9)
_putchar((char)(j / 10 + 48 ));
_putchar ((char)(j % 10 + 48));
}
i++;
_putchar('\n');
}
if (i== 10)
return;
}
