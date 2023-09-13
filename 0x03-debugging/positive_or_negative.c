#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Entry point
 * This function assigns a random number to n and detemines
 * whether its negative postive or zero
 *
 * It outputs a message
 * Return: Always 0 (success)
 */
void positive_or_negative(int n)
{
	if (n < 0)
		printf("%d is negative\n", n);
	else if (n > 0)
		printf("%d is positive\n", n);
	else
		printf("%d is zero\n", n);
}
