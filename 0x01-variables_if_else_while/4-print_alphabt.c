#include <stdio.h>
/**
 *main - print the alphabet in lowercase except q and e
 *Return: 0
 */
int main(void)
{
char ch = 'a';
int n;
n = 0;
while (n != 26 && n != 4 && n != 16)
{
putchar (ch);
n++;
ch++;
if (n == 26)
putchar ('\n');
}
return (0);
}
