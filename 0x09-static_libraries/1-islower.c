#include "main.h"
/**
 * _islower - checks for lowercase character
 * @c : character in ascii
 * Return: 1 for lowercase character. 0 otherwise
 */
int _islower(int c)
{
	if (c > 96 && c < 123)
		return (1);
	else
		return (0);
	_putchar('\n');
}
