#include<stdio.h>

/**
 * main - Entry point of the program
 *
 * Description: This function prints the name of
 * the file it was compiled from.
 *
 * Return: always 0 (success)
 */
int main(void)
{
	printf("%s\n", __FILE__);
	return (0);
}
