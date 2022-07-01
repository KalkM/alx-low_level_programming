#include <stdlib.h>
#include <stdio.h>
/**
 * main - print a negative, positive and zero
 * Return: something
 */
int main(void)
{
	int n;
	if (n > 0)
	{
		printf("%d is positive\n", n);
	}
	else if (n < 0)
	{
		printf("%d is negative\n", n);
	}
	else
	{
		printf("%d is zero\n", n);
	}
	return (0);

}
