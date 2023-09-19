#include "main.h"
/**
 * print_rev - prints a string in reverse
 * @s: the string
 * Return: void
 */
void print_rev(char *s)
{
	int l = 0;
	char *end;

	while (*s != '\0')
	{
		l++;
		s++;
	}
	end = s - 1;
	for (; end >= s - l; end--)
	{
		_putchar(*end);
	}
	_putchar('\n');
}
