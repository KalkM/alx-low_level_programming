#include <stdio.h>
/**
 *main - prints all possible combinations of single-digit numbers separated by comma
 *Return: something
 */
int main(void)
{
int n;
for (n = 0; n >= 0 && n < 10; n++)
{
putchar((char)(n + 48));
if (n < 9)
{
putchar(44);
putchar(32);
}
if (n == 9)
{
putchar('\n');
}
}
return (0);
}
