#include "main.h"
/**
 * print_binary - prints the binary representation of a nummber
 * @n: the number to be converted
 * Return: void
 */
void print_binary(unsigned long int n)
{
	unsigned long int i = 0;
	unsigned long int tmp = n;

	while (tmp != 0)
	{
		tmp >>= 1;
		i++;
	}
	if (n == 0)
	{
		_putchar('0');
		return;
	}
	while (i > 0)
	{
		_putchar((char)((n >> (i - 1)) & 1) + '0');
		i--;
	}


}
