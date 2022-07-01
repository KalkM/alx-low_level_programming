#include <stdio.h>
/**
 *main - print the alphabet in lowercase
 *Return: 0
 */
int main(void)
{
char ch = 'a';
int n;
n = 0;
while (n != 26)
{
putchar (ch);
n++;
ch++;
if (n == 26)
putchar ('\n');
}
return (0);
}
