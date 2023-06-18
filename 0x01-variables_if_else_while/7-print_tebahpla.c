#include <stdio.h>
/**
 * main -  a program that print reverse char
 *
 * Return: always 0
 *
 */

int main(void)
{
	char i;

	for (i = 'z' ; i >= 'a' ; i--)
		putchar(i);
	putchar('\n');
	return (0);
}
