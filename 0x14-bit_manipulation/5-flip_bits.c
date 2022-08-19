#include "main.h"

/**
 * flip_bits - Counts the number of bits needed to be
 * flipped to get from one number to another.
 * @n: The number.
 * @m: The number to flip n to.
 * Return: The necessary number of bits to flip to get from n to m.
 */
 
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int cont = 0;
	unsigned long int i;

	for (i = 0; i <= ((sizeof(n) * 8) - 1); i++)
	{
		if (((n ^ m) >> i) & 1)
			cont++;
	}

	return (cont);
}
