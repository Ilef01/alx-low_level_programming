#include "main.h"
/**
 * _strlen_recursion - returns length of a string
 * @s: the string
 * Return: the length
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	else
		return (1 + _strlen_recursion(s + 1));
}
/**
 * palindrome - checks if a string is palindrome
 * @s: the string
 * @i: the start of the string
 * @j: the end of the string
 * Return: 1 if it's palindrome . 0 if it's not.
 */
int palindrome(char *s, int i, int j)
{
	if (i >= j)
		return (1);
	if (*(s + i) == *(s + j))
		return (palindrome(s, i + 1, j - 1));
	else
		return (0);
}
/**
 * is_palindrome - checks if a string is palindrome
 * @s: the string
 * Return: 1 if it's palindrome . 0 if it's not.
 */
int is_palindrome(char *s)
{
	int l = _strlen_recursion(s);

	if (l <= 1)
		return (1);
	return (palindrome(s, 0, l - 1));
}
