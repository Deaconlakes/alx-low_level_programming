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
	int i, j;
	int *a;

	if (min > max)
		return (NULL);
	j = max - min + 1;
	a = malloc(sizeof(int) * 1);
	if (a == NULL)
		return (NULL);
	for (i = 0; i < j; i++)
	{
		a[i] = min;
		min++;
	}
	return (a);
}
