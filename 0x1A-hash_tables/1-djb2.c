#include "hash_tables.h"

/**
 * hash_djb2 - function to compute hash of 'str' using djb2
 * @str: string to hash
 *
 * Return: value of 64 bits hash
 */

unsigned long int hash_djb2(const unsigned char *str)
{
	unsigned long int hash;
	int a;

	hash = 5381;
	while ((a = *str++))
	{
		hash = ((hash << 5) + hash) + a; /* hash * 33 + a */
	}
	return (hash);
}
