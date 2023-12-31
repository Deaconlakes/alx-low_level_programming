#include "main.h"

/**
 * binary_to_uint - function that  converts a binary
 * number to unsigned int
 * @b: string containing the binary number
 *
 * Return: the converted number
 */
unsigned int binary_to_uint(const char *b)
{
	int i;
	unsigned int nums = 0;

	if (!b)
		return (0);

	for (i = 0; b[i]; i++)
	{
		if (b[i] < '0' || b[i] > '1')
			return (0);
		nums = 2 * nums + (b[i] - '0');
	}

	return (nums);
}
