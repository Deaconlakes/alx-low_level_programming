#include <stdio.h>
/**
 * main- printint letter a-z with putchar
 *
 * Return: always 0
 *
 */

int main(void)
{
	char i;

	for (i = 'a' ; i <= 'z' ; i++)
		putchar(i);
	putchar('\n');
	return (0);
}
