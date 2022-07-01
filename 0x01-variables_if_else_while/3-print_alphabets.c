#include <stdio.h>
/**
 *main - print th alphabet in lowercase then in uppercase
 *Return: 0
 */
int main(void)
{
char l = 'a';
char u = 'A';
int i, n;
i = 0;
while (i != 26)
{
putchar (l);
i++;
l++;
}
while (n != 26)
{
putchar (u);
n++;
u++;
}
if (n == 26)
putchar ('\n');
return (0);
}
