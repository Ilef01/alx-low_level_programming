#include "main.h"

/**
 * _atoi - Converts a string to an integer.
 * @s: The string to be converted.
 *
 * Return: The integer value of the converted string.
 */
int _atoi(char *s)
{
    int sign = 1;  /* Positive by default */
    int result = 0;

    /* Handle negative numbers */
    if (*s == '-')
    {
        sign = -1;
        s++; /* Move past the '-' sign */
    }

    while (*s != '\0')
    {
        if (*s >= '0' && *s <= '9')
        {
            result = result * 10 + (*s - '0');
        }
        else
        {
            /* Stop if a non-digit character is encountered */
            break;
        }
        s++; /* Move to the next character */
    }

    return result * sign;
}

