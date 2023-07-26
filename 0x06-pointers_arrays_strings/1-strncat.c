#include <stdio.h>
#include "main.h"

/**
 * _strncat - function
 * @dest: parameter
 * @src: parameter
 * @n: parameter
 * Return: number
 */

char *_strncat(char *dest, char *src, int n)
{
int i = 0;

int j = 0;

while (dest[i] != '\0')
{
i++;
}
while (src[j] != '\0' && j < n)
{
dest[i] = src[j];
j++;
i++;
}
dest[i] = '\0';
return (dest);
}
