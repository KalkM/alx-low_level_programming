#include <stdio.h>
/**
* main - print the numbers 1 to 100 with fizz buzz.
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
printf("%d" , i);
i++;
}
}
putchar('\n');
return (0);
}
