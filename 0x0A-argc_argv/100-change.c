#include <stdio.h>
#include <stdlib.h>
/**
 * main - function to print the minmum num of coin to
 * make change for an amt
 * @argc: num of command line
 * @argv: array that contains the num of comm line
 * Return: 0 if success
 */
int main(int argc, char **argv)
{
	int penny, mcoin = 0;

	if (argc == 1 || argc > 2)
	{
		printf("Error\n");
		return (1);
	}
	penny = atoi(argv[1]);

	while (penny > 0)
	{
		if (penny >= 25)
			penny -= 25;
		else if (penny >= 10)
			penny -= 10;
		else if (penny >= 5)
			penny -= 5;
		else if (penny >= 2)
			penny -= 2;
		else if (penny >= 1)
			penny -= 1;
		mcoin += 1;
	}
	printf("%d\n", mcoin);
	return (0);
}
