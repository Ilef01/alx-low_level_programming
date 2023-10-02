#include "main.h"
/**
 * _memcpy - copies memory area
 * @dest: destination memory area
 * @src: to be copied memory area
 * @n: the number of bytes
 * Return: a pointer
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;

	for (; i < n; i++)
	{
		*(dest + i) = *(src + i);
	}
	return (dest);
}
