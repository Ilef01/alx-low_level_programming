#include "main.h"

/**
 * _strcat - Concatenates two strings.
 * @dest: Pointer to the destination string.
 * @src: Pointer to the source string to be appended.
 *
 * Return: Pointer to the resulting string (dest).
 */
char *_strcat(char *dest, char *src)
{
    int dest_len = 0;
    int i = 0;

    /* Calculate the length of dest */
    while (dest[dest_len] != '\0')
    {
        dest_len++;
    }

    /* Append src to dest */
    while (src[i] != '\0')
    {
        dest[dest_len] = src[i];
        dest_len++;
        i++;
    }

    /* Null-terminate the resulting string */
    dest[dest_len] = '\0';

    return dest;
}
