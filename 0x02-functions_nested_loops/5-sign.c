#include "main.h"
/**
 * print_sign - prints the sign of a number
 * @n: the number
 * Return: 1 if positive. 0 if zero. -1 if negative
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar(43);
		return (1);
	}
	else if (n == 0)
	{
		_putchar(45);
		return (0);
	}
	else
	{
		_putchar(95);
		return (-1);
	}
}
