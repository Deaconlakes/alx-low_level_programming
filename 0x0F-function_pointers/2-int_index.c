#include "function_pointers.h"
#include <stddef.h>
/**
 * int_index - function that searches for an int
 * @array: the array with the int
 * @size: size of the array
 * @cmp: function pointer to compare the search
 *
 * Return: int element matches, -1 if size <= 0
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array == NULL || cmp == NULL)
		return (-1);
	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]) != 0)
			return (i);
	}
	return (-1);
}
