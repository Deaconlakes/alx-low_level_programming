#include "main.h"
/**
 * cap_string - function to capitalize all strings
 * @str: string to be capitalized
 *
 * Return: pointer to the changed string
 */
char *cap_string(char *str)
{
	int clue = 0;

	while (str[clue])
	{
		while (!(str[clue] >= 'a' && str[clue] <= 'z'))
			clue++;
		if (str[clue - 1] == ' ' ||
		    str[clue - 1] == '\t' ||
		    str[clue - 1] == '\n' ||
		    str[clue - 1] == ',' ||
		    str[clue - 1] == ';' ||
		    str[clue - 1] == '.' ||
		    str[clue - 1] == '!' ||
		    str[clue - 1] == '?' ||
		    str[clue - 1] == '"' ||
		    str[clue - 1] == '(' ||
		    str[clue - 1] == ')' ||
		    str[clue - 1] == '{' ||
		    str[clue - 1] == '}' ||
		    clue == 0)
			str[clue] = 32;

		clue++;
	}
	return (str);
}
