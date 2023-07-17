#include "main.h"
#include <stdlib.h>
/**
 * _strdup - funt to return pointer to a newly allocated
 * space in memory and duplicate str to new space
 * @str: initial input str
 * Return: pointer to the memory allocated i.e array of char
 */
char *_strdup(char *str)
{
	unsigned int i, j;
	char *strd;

	if (str == NULL)
	{
		return (NULL);
	}

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}

	strd = (char *)malloc(sizeof(char) * (i + 1));

	if (strd == NULL)
	{
		return (NULL);
	}

	for (j = 0; j <= i; j++)
	{
		strd[j] = str[j];
	}
	return (strd);
}
