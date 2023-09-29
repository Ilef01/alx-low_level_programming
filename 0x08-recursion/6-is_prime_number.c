#include "main.h"
int prime_number(int x, int i);
int is_prime_number(int n);
/**
 * prime_number - finds the prime number
 * @x: the number
 * @i: divider
 * Return:  1 if it's prime else 0
 */
int prime_number(int x, int i)
{
	if (i > x / 2)
		return (1);
	if (x % i == 0)
		return (0);
	return (prime_number(x, i + 1));
}
/**
 * is_prime_number - checks if a number is prime
 * @n: the number
 * Return: 1 if it's prime else 0
 */
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (prime_number(n, 2));
}
