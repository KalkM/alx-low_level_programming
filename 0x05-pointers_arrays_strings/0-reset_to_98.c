#include  "main.h"

/**
 * reset_to_98- tests updates the value it points to to 98
 * @n: character to test.
 * Return: Nothing
 */

void reset_to_98(int *n)
{

	int *p = &n;

	*p = 98;

}
