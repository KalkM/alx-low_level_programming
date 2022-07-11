#include "main.h"
/**
 *rev_string - reverses a string
 *@s: accepts the string
 *Return: Nothing
 */
void rev_string(char *s)
{
int i, j, k;
char c[1024];
i = 0;
while (s[i] != '\0')
i++;
j = i - 1;
for (k = 0; k < i; k++)
{
c[k] = s[j];
j--;
}
c[i] = '\0';
}
