#include <stdio.h>
/**
 * main - print all arg it received
 * @argc: num of cammand line
 * @argv: array that contains the command line
 * Return: 0 if succes
 */
int main(int argc, char *argv[])
{
	int a;

	for (a = 0; a < argc; a++)
	{
		printf("%s\n", argv[a]);
	}
	return (0);
}
