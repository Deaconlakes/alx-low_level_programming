#include <stdio.h>
/**
 * main - print num of arg passed into it
 * @argc: num of command arg
 * @argv: array that contains command line arg
 * Return: 0 if succesful
 */
int main(int argc, char **argv __attribute__((unused)))
{
	printf("%d\n", argc - 1);
	return (0);
}
