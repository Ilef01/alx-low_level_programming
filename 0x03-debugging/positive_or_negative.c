#include "main.h"

/**
 * This function assigns a random number to n and detemines
 * whether its negative postive or zero
 *
 * It outputs a message
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
