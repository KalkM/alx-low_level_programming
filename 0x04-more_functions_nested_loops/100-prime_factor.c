#include <stdio.h>
/**
 *main - do something
 *Return: something
 */
int main(void)
{
long int i, j;
j = 2;
i = 612852475143;
while (i != 1)
{
if (i % j == 0)
{
i = i / j;
}
else
{
j++;
}
}
printf("%ld\n", j);
return (0);
}
