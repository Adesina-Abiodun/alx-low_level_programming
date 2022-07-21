#include "main.h"

/**
 * binary_to_uint - converts a binary number to unsigned int
 * @b: binary number
 * Return: unsigned int or NULL or 0
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int i, decimal = 0;

	if (b == NULL)
		return (0);

	for (i = 0; b[i]; i++)
	{
		if (b[i] < '0' || b[i] > '1')
			return (0);
		decimal = 2 * decimal + (b[i] - '0');
	}

	return (decimal);
}#include "main.h"

/**
 * clear_bit - sets the value of a bit to 0 at a given index
 * @n: number
 * @index: index
 * Return: 1 if success else -1
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int mask;

	if (n == NULL)
		return (-1);
	if (index > (sizeof(n) * 8))
		return (-1);
	mask = 1 << index;
	*n = (~mask) & *n;
	return (1);
}
