#include "main.h"
/**
 * factorial - returns factorial of an integer
 * @n: the integer
 * Return: the value
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0)
		return (1);
	return (n * factorial(n - 1));
}
