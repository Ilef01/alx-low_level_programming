#include <unistd.h>
/**
 * _putchar - outputs character
 * @c: The character
 * Return: the character
 */
int _putchar(char c)
{
	return write(1, &c, 1);
}
