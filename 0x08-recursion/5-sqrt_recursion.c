#include "main.h"
int sqrt_recursion(int i, int j);
/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: the number
 *
 * Return: the square
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (sqrt_recursion(n, 0));
}
/**
 * sqrt_recursion - return the natural root of its first parameter
 * @i: the integer
 * @j: the root estimate
 *
 * Return: the square root
 */
int sqrt_recursion(int i, int j)
{
	if (j * j > i)
		return (-1);
	if (j * j == i)
		return (j);
	return (sqrt_recursion(i, j + 1));
}
