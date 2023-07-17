#include "main.h"
#include <stdlib.h>
/**
 * create_array - funct to create array of char
 * @size: input for the size of the array in int
 * @c: storage for string of char
 * Return: pointer to the base char
 */
char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *ptr;

	if (size == 0)
	{
		return (NULL);
	}
	ptr = malloc(sizeof(char) * size);
	if (ptr == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < size; i++)
	{
		ptr[i] = c;
	}
	return (ptr);
}
