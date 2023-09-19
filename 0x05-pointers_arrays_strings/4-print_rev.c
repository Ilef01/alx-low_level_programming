#include "main.h"
/**
 * print_rev - prints a string in reverse
 * @s: the string
 * Return: void
 */
void print_rev(char *s)
{
	int l;
	int i;

	l = _strlen(s);
	for (i = l; i <= 0; i--)
	{
		_putchar(s + i);
	}
}
