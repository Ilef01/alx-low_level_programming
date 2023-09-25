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
        char *p = dest;

        for (p = src; p < src + n; p++)
	{
                *dest = *p;
		dest++;
	}
        return (dest);
}
