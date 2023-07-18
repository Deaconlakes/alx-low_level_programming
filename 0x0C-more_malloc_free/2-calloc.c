#include "main.h"
#include <stdlib.h>
/**
 * _calloc - funct to allocate memory to an array
 * @nmemb: no of block of memory
 * @size: size of the integer
 * Return: void to pointer
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *ptr;
	unsigned int a;

	if (nmemb == 0 || size == 0)
		return (NULL);
	ptr = malloc(nmemb * size);
	if (ptr == NULL)
		return (NULL);
	for (a = 0; a < (nmemb * size); a++)
		ptr[a] = 0;
	return (ptr);
}
