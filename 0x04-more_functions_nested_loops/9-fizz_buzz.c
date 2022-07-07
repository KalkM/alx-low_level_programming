#include <stdio.h>
/**
* main - print the first 50 fibonacci numbers.
* Return: Nothing.
*/

int main(void)
{
int i = 1;
while (i <= 100)
{
if (i % 15 == 0)
{
printf("FizzBuzz ");
i++;
}
if (i % 3 == 0)
{
printf("Fizz ");
i++;
}
if ((i % 5 == 0)  && (i != 100))
{
printf("Buzz ");
i++;
}
if (i == 100)
{
printf("Buzz");
i++;
}
else
{
printf("%d", i);
printf(" ");
i++;
}
}
printf("\n");
return (0);
}
