#include "main.h"
/**
 * print_rev - prints a string in reverse
 * @s: the string
 * Return: void
 */
void print_rev(char *s)
{
	int l = _strlen(s);
	char *end = s + l - 1;

	for (; end >= s; end--)
	{
		_putchar(*end);
	}
	_putchar('\n');
}
