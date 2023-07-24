#include "main.h"
#include <stdio.h>

/**
 * rev_string - funtion
 * @s: parameter
 * Return: number
 */

void rev_string(char *s)
{
        char temp = s[0];

        int count = 0;

        int i;

while (s[count] != '\0')
        {
                        count++;
        }
                        for (i=0; i < count; i++)
                        {
                                count--;
                                temp = s[i];
                                s[i] = s[count];
                                s[count] = temp;
                        }
}

