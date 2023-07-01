#include "main.h"
/**
 * reverse_array - function to reverse array
 * @a: array var
 * @n: numbers of array element
 *
 * Return: void
 */
void reverse_array(int *a, int n)
{
	int c;
	int d;

	for (c = 0; c < n--; c++)
	{
		d = a[c];
		a[c] = a[n];
		a[n] = d;
	}
}
