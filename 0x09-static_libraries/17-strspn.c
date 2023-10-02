#include "main.h"

/**
 * _strspn - Calculates the length of the initial segment of @s
 *            which consists entirely of characters in @accept.
 * @s: The string to be searched.
 * @accept: The string containing the characters to match.
 *
 * Return: The number of bytes in the initial segment of @s which
 *         consist only of characters from @accept.
 */
unsigned int _strspn(char *s, char *accept)
{
    unsigned int count = 0;
    int i, j;
    int found;

    for (i = 0; s[i]; i++)
    {
        found = 0;
        for (j = 0; accept[j]; j++)
        {
            if (s[i] == accept[j])
            {
                found = 1;
                break;
            }
        }

        if (found == 0)
        {
            break;
        }

        count++;
    }

    return count;
}
