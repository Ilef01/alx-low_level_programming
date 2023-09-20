#include "main.h"
/**
 * *_strncpy - copies a string
 * @dest: the string
 * @src: the string that will be copied
 * @n: number of bytes to copy
 * Return: the string gotten
 */
char *_strncpy(char *dest, char *src, int n)
{
	char *p = dest;

	while (*src != '\0' && n > 0)
	{
		*dest = *src;
		src++;
		dest++;
		n--;
	}
	while (n > 0)
	{
		*dest = '\0';
		dest++;
		n--;
	}
	return (p);
}
