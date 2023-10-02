#include "main.h"
#include <stdio.h>
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
