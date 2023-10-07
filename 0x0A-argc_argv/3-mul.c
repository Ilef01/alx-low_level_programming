#include "main.h"
#include <stdio.h>
/**
 * _atoi - Converts a string to an integer.
 * @s: The string to be converted.
 *
 * Return: The integer value of the converted string.
 */
int _atoi(char *s)
{
	int sign = 1;
	int result = 0;
	if (*s == '-')
	{
		sign = -1;
		s++;
	}
	while (*s != '\0')
	{
		if (*s >= '0' && *s <= '9')
			result = result * 10 + (*s - '0');
		else
			break;
		s++;
	}
	return result * sign;
}
/**
 * main -multiplies 2 numbers
 * @argc: argument count
 * @argv: argument vector
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
	int num1;
	int num2;
	int res;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	num1 = _atoi(argv[1]);
	num2 = _atoi(argv[2]);
	res = num1 * num2;
	printf("%d\n", res);
	return (0);
}
