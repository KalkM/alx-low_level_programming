#include "main.h"

/**
 *  print_numbers - prints numbers
 *   Return: Nothing
 */

void print_numbers(void)
{
int i = 0;
while (i <= 9)
{
_putchar((char)(i + 48));
i++;
}
_putchar('\n');
}
