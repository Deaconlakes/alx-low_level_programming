#include "main.h"
/**
 * strlen_recur - function to get lenght of string
 * @s: string lenght
 * Return: lenght of the string
 */
int strlen_recur(char *s)
{
	if (*s == '\0')
		return (0);
	else
		return (1 + strlen_recur(s + 1));
}
/**
 * compare_str - function to compare each char of the string
 * @s: string
 * @left: small iterator
 * @right: large iterator
 * Return: int
 */
int compare_str(char *s, int left, int right)
{
	if (*(s + left) == *(s + right))
	{
		if (left == right || left == right + 1)
			return (1);
		return (0 + compare_str(s, left + 1, right - 1));
	}
	return (0);
}
/**
 * is_palindrome - function to check if a string is
 * palindrome
 * @s: the string to check
 * Return: 1 if it is palindrome, 0 otherwise
 */
int is_palindrome(char *s)
{
	if (*s == '\0')
		return (1);
	return (compare_str(s, 0, strlen_recur(s) - 1));
}
