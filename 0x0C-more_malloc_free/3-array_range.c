#include "main.h"
#include <stdlib.h>
/**
 * array_range - function to creat an aray of int
 * @min: min value
 * @max: max value
 * Return: int ptr to the alloc memory
 */
int *array_range(int min, int max)
{
	int a, b;
	int *p;

	if (min > max)
		return (NULL);
	b = max - min + 1;
	p = malloc(sizeof(int) * 1);
	if (p == NULL)
		return (NULL);
	for (a = 0; a < b; a++)
	{
		p[a] = min;
		min++;
	}
	return (p);
}
