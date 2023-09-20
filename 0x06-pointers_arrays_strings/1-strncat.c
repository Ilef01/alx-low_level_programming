#include "main.h"
/**
 * *_strncat - returns length of a string
 * @dest: the first string
 * @src:the second string
 * @n : number of bytes to concatenate
 * Return: the concatenation
 */
char *_strncat(char *dest, char *src, int n)
{
	char *p = dest;

	while (*dest != '\0')
		dest++;
	while (*src != '\0' && n > 0)
	{
		*dest = *src;
		src++;
		dest++;
		n--;
	}
	*dest = '\0';
	return (p);
}
