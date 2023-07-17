#include "main.h"
#include <stdlib.h>
/**
 * argstostr - funct to concatenate all program arg
 * @ac: arg count
 * @av: arg vector
 * Return: pointer to the array of character
 */
char *argstostr(int ac, char **av)
{
	char *concat;
	int i, j, k = 0, lenght = 0;

	if (ac == 0 || av == NULL)
		return (NULL);
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j]; j++)
			lenght++;
	}
	lenght += ac;

	concat = malloc(sizeof(char) * lenght + 1);
	if (concat == NULL)
		return (NULL);
	
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j]; j++)
		{
			concat[k] = av[i][j];
			k++;
		}
		if (concat[k] == '\0')
		{
			concat[k++] = '\n';
		}
	}
	return (concat);
}
