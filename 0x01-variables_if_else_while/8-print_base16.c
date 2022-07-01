#include <stdio.h>
/**
 *main - pprints all the numbers of base 16 in lowercase
 *Return: something
 */
int main(void)
{
int n, o;
for (n = 0; n >= 0 && n < 10; n++)
{
putchar((char)(n + 48));
}
for (o = 0; o >= 0 && o < 6; o++)
{
putchar((char)(o + 97));
}
if (o == 6)
{
putchar('\n');
}
return (0);
}
