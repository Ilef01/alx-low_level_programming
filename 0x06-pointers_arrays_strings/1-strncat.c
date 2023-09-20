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
	int i;

	while (*dest != '\0')
		dest++;
	for (i = 0; i < n; i++)
	{
		*dest = *src;
		src++;
		dest++;
	}
	*dest = '\0';
	return (p);
}
