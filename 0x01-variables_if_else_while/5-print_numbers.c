#include <stdio.h>
/**
 *main -  prints all single digit numbers of base 10 starting from 0
 *Return: something
 */
int main(void)
{
for (int n = 0; n >= 0 && n < 10; n++)
{
printf("%d", n);
if (n == 9)
printf("\n");
}
return (0);
}
