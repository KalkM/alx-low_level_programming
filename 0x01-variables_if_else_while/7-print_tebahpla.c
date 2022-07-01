#include <stdio.h>
/**
 *main - prints the lowercase alphabet in reverse
 *Return: something
 */
int main(void)
{
int n;
for (n = 0; n <= 0 && n > -26; n--)
{
putchar((char)(n + 122));
if (n == -25)
putchar('\n');
}
return (0);
}
