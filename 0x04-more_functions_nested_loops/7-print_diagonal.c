#include "main.h"
/**
 * print_diagonal - draws a straight line
 * @n: the length of the line
 * Return: (void)
 */
void print_diagonal(int n)
{
	int i;
	int j;

	if (n <= 0)
		_putchar('\n');
	else
	{
		for (j = 1; j <= n; j++)
		{
			for (i = 0; i < j; i++)
				_putchar(' ');
			_putchar('\n');
		}
	}
}
