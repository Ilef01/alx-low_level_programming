#include <stdio.h>
/**
 * main - Entry point
 * This function outputis _putchar followed by a new line
 * Return: always 0 (success)
 */
int main(void)
{
	char str[] = "_putchar";
	int i;

	for (i = 0; str[i] != '\0'; i++)
		putchar(str[i]);
	putchar('\n');
	return (0);
}
